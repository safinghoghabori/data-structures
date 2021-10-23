/*

Problem: Reverse each word of string

input: Welcome to coding ninjas
output: emoclew ot gnidoc sajnin

Approach 1(used this): Using simple method done in this program.

Approach 2: Using Stack(available on GFG)

*/

#include<iostream>
#include<cstring>

using namespace std;

void reverseWord(char str[], int start, int endi)
{
    for(int i=endi; i>=start; i--)
    {
        cout<<str[i];
    }
    cout<<" ";
}

void reverseEachString(char str[])
{
    int n=strlen(str);
    int prev=-1;

    int i=0;
    while(i < n)
    {
        if(str[i] == '  ') // welcome to coding ninjas
        {
            reverseWord(str,prev+1,i-1); //for next iteration prev+1 will be useful like, we're assigning i to prev, so ith position will be on space, so to move it on element after space we need to do +1;
            prev=i;
        }
        i++;
    }

     // Since there will not be space after last word. So we have to handle it explicitely.
    reverseWord(str,prev+1,n-1);
}

int main()
{
    char str[100];

    cin.getline(str,100);

    reverseEachString(str);

    return 0;
}
