/*

    Problem: Replace Character Recursively

    Given an input string S and two characters c1 and c2, you need to replace every occurrence of character c1 with character c2 in the given string.
    Do this recursively.

    Sample Input :
    abacd
    a x

    Sample Output :
    xbxcd

*/

#include<iostream>

using namespace std;

void replaceCharacter(char str[], char c1, char c2)
{
    // Base case
    if(str[0] == '\0')
    {
        return;
    }

    // Calculation and Recursive call
    if(str[0] == c1)
    {
        str[0] = c2;

        replaceCharacter(str,c1,c2);
    }
    else
    {
        replaceCharacter(str+1,c1,c2);
    }
}

int main()
{
    char str[100];
    cin>>str;

    char c1,c2;
    cin>>c1>>c2;

    replaceCharacter(str,c1,c2);
    cout<<str;

    return 0;
}
