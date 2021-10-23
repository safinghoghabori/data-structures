/*

    Problem: You are given a  string S. Write a function which will replace all the words within the sentence whose
                length is even and greater than or equal to 4, with a space between the two equal halves of the word.

                space complexity should be O(1).

    Sample input--> Helloo world good morniing
    Output --> Hel loo world go od morn iing

    -------------------------------------------------------------------------------

*/

#include<iostream>
#include<string>

using namespace std;

void breakWord(string s)
{
    string temp="";
    string ans="";
    for(int i=0; i<s.size(); i++)
    {
        if(s[i] != ' ')
        {
            temp=temp+s[i];
        }
        else
        {
            if(temp.size()%2==0 && temp.size() >= 4 )
            {
                int mid=temp.size()/2;
                ans=ans+temp.substr(0,mid); // Left part
                ans=ans+" "; // Add space
                ans=ans+temp.substr(mid); //Right part

                cout<<ans<<" ";

            }
            temp="";
            ans="";
        }
    }
}

int main()
{
    string s;
    getline(cin,s);

    s=s+" ";

    breakWord(s);

    return 0;
}

