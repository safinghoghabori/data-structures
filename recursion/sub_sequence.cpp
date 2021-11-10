#include<iostream>
#include<string>
#include<math.h> // or <cmath>

using namespace std;

int subsequence(string str,string output[])
{
    if(str.empty())
    {
        output[0] = "";
        return 1;
    }

    string smallString = str.substr(1); /// suupose str="abc", extract "bc" which will handle by recursion, and we will handle "a"
    int smallOutputSize = subsequence(smallString,output); /// if input is "abc" then 4, because its getting "bc" as string and combination of bc will be 4 i.e. " ",b,bc,c

    for(int i=0; i<smallOutputSize; i++)
    {
        output[i + smallOutputSize] = str[0] + output[i]; /// Assume that output array has substring of "bc" as we give it to recursion, and str[0] will give "a", so we're concatinating them at respective indexes.
                                                                                /// As 0-4 indexes already occupied in output[] we have to start from 5th index.
    }

    return 2 * smallOutputSize;
}

int main()
{
    string str;
    cin>>str;

    /// pow(base, exponent)
    int size = pow(2,str.size()); /// subsequence are always 2 ^ n, so to give output array size dynamically do this
    string* output = new string[size];

    int count = subsequence(str,output);

    for(int i=0; i<count; i++)
    {
        cout<<output[i]<<endl;
    }
    return 0;
}
