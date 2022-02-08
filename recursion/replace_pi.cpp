/**

    Problem: Replace pi (recursive) [https://www.geeksforgeeks.org/recursive-program-to-replace-all-occurrences-of-pi-with-3-14-in-a-given-string/]
    Given a string, compute recursively a new string where all appearances of "pi" have been replaced by "3.14".

    Sample Input 1 :
    xpix
    Sample Output :
    x3.14x

    Sample Input 2 :
    pipi
    Sample Output :
    3.143.14

    Sample Input 3 :
    pip
    Sample Output :
    3.14p

*/

#include<iostream>
#include<string>
#include<cstring>

using namespace std;

// [By dividing problem into 2 parts we are handling 0th index whereas from 1st onwards recursion will do]
void replacePI(char str[])
{
    // Base case
    if(strlen(str)==0 || strlen(str)== 1)
    {
        return;
    }

    // Recursive call
    replacePI(str+1);

    // Calculations(if the first character is 'p'
    // and the first character of the part
    // passed to recursion is 'i' then replace
    // "pi" with "3.14")
    if(str[0] == 'p' && str[1] == 'i')
    {
        // Shifting 2 places to right side from end of string to put 3.14
        for(int i=strlen(str); i>=2;i--)
        {
            str[i+2]=str[i];
        }

        // Replacing with 3.14
        str[0]='3';
        str[1]='.';
        str[2]='1';
        str[3]='4';
    }
}

int main()
{
    char str[100];
    cin>>str;

    replacePI(str);

    cout<<str;

    return 0;
}
