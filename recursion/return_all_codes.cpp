#include<iostream>
#include<string>
#include<vector>

using namespace std;

void help(string input, string temp, vector<string> &str)
{
    if(input.size() == 0)
    {
        str.push_back(temp);
        return;
    }

    // Get 0th index(first convert string's first character number into integer number i.e. 1, 2, ... , then convert it into respective character i.e. a, b, c ...
    char c1 = (input[0] - 48) + 96;

    // Recursive call
    // Note: temp+c1 is string concatenation
    help(input.substr(1), temp + c1, str);

    if(input.size() > 1)
    {
        // Form 2 digit number
        int d = (input[0] - 48) * 10 + (input[1] - 48);

        // It means we need only 2 digit number plus should be less than or equal to 26. because we need to form string from "a to z"
        if(d > 26)
        {
            return;
        }

        // Convert ASCII into character
        char c2  = d + 96;

        // Recursive call
        help(input.substr(2), temp+c2, str);
    }
}

int returnCodes(string input, string output[])
{
    vector<string> str;

    // Blank string
    string temp="";

    help(input,temp,str);

    for(int i=0; i<str.size(); i++)
    {
        output[i] = str[i];
    }

    int x=str.size();
    return x;
}

int main()
{
    string input;
    cin>>input;

    string output[100];
    int count = returnCodes(input,output);

    for(int i=0; i<count; i++)
    {
        cout<<output[i]<<endl;
    }

    return 0;
}
