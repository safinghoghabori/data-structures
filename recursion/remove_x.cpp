/*

    Problem: Remove X from string

    input--> abxcdxe
    output--> abcde

*/

#include<iostream>

using namespace std;

// We require to change the string itself, so no return
void removeX(char s[])
{
    if(s[0] == '\0')
    {
        return;     // ATTENTION: If we have void return type, so it wont allow to return but we can do this hack...
    }

    //cout<<"s[0]"<<s[0]<<endl;
    if(s[0] == 'x')
    {
        for(int i=0; s[i]!='\0'; i++)
        {
            s[i]=s[i+1];
        }

        // If X found, then from that substring will be passed to s[], so next time 0th index will be considered from the substring not main string.
        removeX(s);
    }
    else
    {
        // If X is not on 0th index, then move to next index.
        removeX(s + 1);
    }
}

int main()
{
    char str[100];
    cin>>str;

    removeX(str);
    cout<<str<<endl;

    return 0;
}
