#include<iostream>
#include<string>

using namespace std;

// The variable res is used to store all interleavings (or
// output strings) one by one.
// i is used to pass next available place in res
void interleavings(string str1,string str2, string res, int m, int n, int i)
{
    // Base Case( If all characters of str1 and str2 have been
    // included in output string, then print the output string)
    if(m == 0 && n ==0)
    {
        cout<<res<<endl;
        return;
    }

    // Recursive call
    if(m != 0)
    {
        res[i] = str1[0]; // taking 0th index and passing remaining to recur call
        interleavings(str1.substr(1), str2, res, m-1, n, i+1);
    }

    if(n != 0)
    {
        res[i] = str2[0];
        interleavings(str1, str2.substr(1), res, m, n-1, i+1);
    }
}

void printInterleavings(string str1, string str2, int m, int n)
{
    string res(m+n+1, ' '); // Give size to output string(ITS MUST, without this, nothing will be printed on the screen)
    interleavings(str1, str2, res, m, n, 0);
}

int main()
{
    string str1,str2;
    cin>>str1>>str2;

    printInterleavings(str1, str2, str1.size(), str2.size());

    return 0;
}
