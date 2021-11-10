/*
    Problem: Remove Duplicates Recursively
                Given a string S, remove consecutive duplicates from it recursively.(change in char array it self, do not create new array)

                Sample Input 1 :
                aabccba
                Sample Output 1 :
                abcba

                Sample Input 2 :
                xxxyyyzwwzzz
                Sample Output 2 :
                xyzwz
*/

#include<iostream>
#include<cstring>

using namespace std;

void removeDuplicates(char s[])
{
    if(strlen(s) == 1 || s[0] == '\0')
    {
        return;
    }

    if(s[0] == s[1])
    {
        for(int i=0; s[i] != '\0'; i++)
        {
            s[i] = s[i+1];
        }
        removeDuplicates(s);
    }
    removeDuplicates(s+1);
}

int main()
{
    char str[100];
    cin>>str;

    removeDuplicates(str);
    cout<<str;

    return 0;
}
