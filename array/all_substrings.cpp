/*

    Problem: Find all substring of given string

    Input :  abcd
    Output :  a
                  b
                  c
                  d
                  ab
                  bc
                  cd
                  abc
                  bcd
                  abcd
    ---------------------------------------------------------------

    Approach 1: we need here 3 loops,
                    loop1 for iterating over each character
                    loop2 for go from that character to end like a, ab, abc etc...
                    loop3 for

    Approach 2: Use substr function.

*/

#include<iostream>

using namespace std;

// Approach 1: Using 3 loops
void printSubstrings1(string str)
{
    // Outer loop: For starting point
    for(int i=0; i<str.size(); i++)
    {
        //Inner loop: For ending point
        for(int j=i; j<str.size(); j++)
        {
            //Inner most: To print from start to end
            for(int k=i; k<=j; k++)
            {
                cout<<str[k];
            }
            cout<<endl; // Changing the line after printing from Start to End
        }
    }
cout<<endl;
}


// Approach 2: Using substr function
void printSubstrings2(string str)
{
    for(int i=0; i<str.size(); i++)
    {
        for(int j=1; j<=str.size()-i; j++)
        {
            cout<<str.substr(i,j)<<endl; // str.substr(0,1)......(0,2),(0,3),(1,1) etc...
        }
    }
}

int main()
{
    string str;
    getline(cin, str);

    printSubstrings1(str);
    printSubstrings2(str);

    return 0;
}
