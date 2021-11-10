#include<iostream>

using namespace std;

int length(char s[])
{
    // Base case
    if(s[0] == '\0')
    {
        return 0;
    }

    // Recursive call
    int k = length(s+1);

    // Calculation
    return 1+k;
}

int main()
{
    char str[100];
    cin>>str;

    int len = length(str);
    cout<<len;

    return 0;
}
