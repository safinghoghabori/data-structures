/**

    Problem: Print subsequences.

    Note: its same as returning subsequences but in return program we required 2^n string array to store subsequences, which increses space complextiy, so we can use this method also.

*/

#include<iostream>
#include<string>

using namespace std;

void print_subsequences(string input, string output)
{
    if(input.empty())
    {
        cout<<output<<endl;
        return;
    }

    print_subsequences(input.substr(1),output);
    print_subsequences(input.substr(1), output+input[0]);
}

int main()
{
    string str;
    cin>>str;

    print_subsequences(str," ");

    return 0;
}
