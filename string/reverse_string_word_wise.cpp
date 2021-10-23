/*

    Problem: Reverse a string word wise

    input--> Welcome to coding ninjas
    output--> ninjas coding to welcome

    input--> Always indent your code
    output--> code your indent always

    --------------------------------------------------

    Approach: Start from rightmost and iterate till _space found and move that portion to print

*/

#include<iostream>

using namespace std;

void reverseWord(string str, int start, int end)
{

    //cout<<"start..."<<start;
    //cout<<"end..."<<end;
    //[NOTE: If you want to change inside array then we need to use swap logic.(somthing like this: https://mega.nz/fm/bZERVA4Z)]
    for(int i=start; i<=end; i++)
    {
        cout<<str[i];
    }
    cout<<" ";
}

void reverseStringWordWise(string str)
{
    int end=str.size()-1;
    int i;
    for(i=str.size(); i>=0; i--) //i starting from end suppose 17. so -- will be there
    {
        if(str[i] == ' ')
        {
            reverseWord(str,i+1,end);
            end=i-1;
        }
    }

    reverseWord(str,i=0,end);
}

int main()
{
    string str;
    getline(cin,str);

    reverseStringWordWise(str);

    return 0;
}
