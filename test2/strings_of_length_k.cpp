/**

    Problem: Strings of Length k

    Given a string S and an integer k, you need to find and return all the possible strings that can be made of size k using only characters present in string S.
    The characters can repeat as many times as needed.
    Note : The number of output strings can be at max 1000.

    Input format :
    String S and Integer k (separated by space)
    Output Format :
    All possible strings (in different lines)
    Constraints :
    1 <= Length of String S <= 10
    1 <= k <= 5
    Sample Input 1 :
    abc 2
    Sample Output 1 :
    aa
    ab
    ac
    ba
    bb
    bc
    ca
    cb
    cc
*/

#include<iostream>

using namespace std;

void stringsOfLengthK(string str, string prefix, int k)
{
    // Base case: k is 0,
   // print prefix
   if(k == 0)
   {
       cout<<prefix<<endl;
       return;
   }

     // One by one add all characters
    // from string and recursively
    // call for k-1
    for(int i=0; i<str.size(); i++)
    {
        string newPrefix;

        // Next character of input added
        newPrefix = prefix + str[i];

        // k is decreased, because
        // we have added a new character
        stringsOfLengthK(str, newPrefix, k-1);
    }

}

int main()
{
    string s;
    cin>>s;

    int k;
    cin>>k;

    stringsOfLengthK(s,"",k);

    return 0;
}




