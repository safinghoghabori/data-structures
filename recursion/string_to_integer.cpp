/**

    Problem: Write a recursive function to convert a given string into the number it represents.
                That is input will be a numeric string that contains only numbers, you need to convert the string into corresponding integer and return the answer.

        Input format :
        Numeric string S (string, Eg. "1234")

        Output format :
        Corresponding integer N (int, Eg. 1234)

*/

#include<iostream>

using namespace std;

// To handle Positive value
int stringToNumber(string str)
{
    if(str.size() == 0)
    {
        return 0;
    }

    int len = str.size();
    int smallAnswer = stringToNumber(str.substr(0,len-1));

    int nextDigit = str[len-1]- '0';
    int num = (smallAnswer * 10) + nextDigit;

    return num;
}

int main()
{
    string str;
    cin>>str;

    int res = stringToNumber(str);
    cout<<res;

    return 0;
}
