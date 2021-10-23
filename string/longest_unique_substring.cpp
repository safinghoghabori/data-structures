#include<iostream>
#include<vector>

using namespace std;

//void longestUniqueSubstr(string str)
//{
//    vector<int> lastIndex(256,-1); //it maintains index of characters. Thats why we started from -1 so can be moved to 0 and so on...
//
//    int start=-1;
//    int maxLength=0;
//    int startIndex=0;
//
//    for(int i=0; i<str.size(); i++)
//    {
//        if(lastIndex[str[i]] > start)
//        {
//            start=lastIndex[str[i]];
//        }
//        lastIndex[str[i]] = i;
//        maxLength=max(maxLength, i-start);
//    }
//}

void longestUniqueSubstr(string str)
{
    vector<int> lastIndex(256, -1);

    int start=0;
    int next=0;
    int max_length=0;
    int start_index=-1; //to return substring, store start index value of substr

    while(str[next] != '\0')
    {
        char nextChar=str[next];

        // it means character is not repeated till now, so increament next
        if(lastIndex[nextChar] < start)
        {
            next++;
        }
        else
        {
            int currentOptionLength=next-start;
            if(currentOptionLength > max_length)
            {
                max_length=currentOptionLength;
                start_index=start;
            }

            //put start on position after repeated character(first character of repeated character which arrived earlier, not after the one which repeated just now, like abab then when arrives a 2nd time we will put start on 1st index, after first arrival.)
            start=lastIndex[nextChar]+1;
            next++;
        }

        //update index of character which repeated
        lastIndex[nextChar]=next-1;
    }

    //check last substring too(in some cases i.e. abbbbcda, we will be out of loop due to \0=null character, so it wont measure last substring. To do so, we need to write extra code
     int currentOptionLength=next-start;
     if(currentOptionLength > max_length)
    {
        max_length=currentOptionLength;
        start_index=start;
    }

    //Print a substr
    for(int i=0; i<max_length; i++)
    {
        cout<<str[start_index++];
    }
}

int main()
{
    string str;
    cin>>str;

    longestUniqueSubstr(str);

    return 0;
}
