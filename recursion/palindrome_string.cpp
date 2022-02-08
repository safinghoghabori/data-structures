#include<iostream>

using namespace std;

bool checkPalindrome(string str, int n, int i)
{
    // If i reach at middle it means each time first and last char mathed and that why it increased, so reaturn true.
    if(i >= n/2)
    {
        return true;
    }

    // Compare first char and last char, if not matched then return false
    if(str[i] == str[n-1-i])
    {
        return checkPalindrome(str,n,i+1);
    }
    return false;
}

int main()
{
    string s;
    cin>>s;

    bool res = checkPalindrome(s, s.size(),0);
    res == 1 ? cout<<"true" : cout<<"false";

    return 0;
}
