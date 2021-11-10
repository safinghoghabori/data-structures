/**

    Problem: Print Keypad Code

    Given an integer n, using phone keypad find out all the possible strings that can be made using digits of input n.
    Return empty string for numbers 0 and 1.

    Note :
    1. The order of strings are not important.
    2. Input and output has already been managed for you. You just have to populate the output array and return the count of elements populated in the output array.

    Input Format :
    Integer n
    Output Format :
    All possible strings in different lines

    Constraints :
    1 <= n <= 10^6

    Sample Input:
    23
    Sample Output:
    ad
    ae
    af
    bd
    be
    bf
    cd
    ce
    cf

*/
#include<iostream>
#include<string>

using namespace std;

// Global array to store all possible numbers strings on Phone keyboard.
string codes[] = {" ", " ", "abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void printKeyPad(int n, string output)
{
    if(n == 0)
    {
        cout<<output<<endl;
        return;
    }

    int lastDigit = n%10; // Suppose entered string is "23", so this will be 3
    int smallNumber = n/10; // so this will be "2"

    string options = codes[lastDigit]; // if consider 23, then 3 = d e f
    for(int i=0; i < options.size(); i++)
    {
        printKeyPad(smallNumber, options[i] + output);
    }
}

int main()
{
    int n;
    cin>>n;

    printKeyPad(n,"");

    return 0;
}
