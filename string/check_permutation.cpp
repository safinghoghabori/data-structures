/*

Problem: Check if string is permutation of each other(pdf also available in folder, check it)

input--> string1=abac
              string2=aacb
output--> true

Hint: we need to check that if string 1 and string 2 are permutation of each other means both contains same characters with same length(order doesn't matter).

Brute force Approach: Compare each character of string 1 with string 2's each character, it wont work because there may be repeated characters too.
                                like, str1=aab & str2=bba. Now these both string contains a and b, and if we match them it will work but its not true permutation.

Logic: Create new array which can contain ASCII values of each character i.e. array size of 256 and initialise all indexes value with 0.
          Then we need to store frequency of each character at its specific index.
          Now for string 1, increament character's frequency by 1. Whereas for string 2, decreament character's frequency by 1.
          Then traverse through frequency array and check if all values are equal to 0 or not. If yes then return true else false.

Another way: sort both string and then compare them, if equal return true else return false.

*/

#include<iostream>
#include<cstring>

using namespace std;

bool checkPermutation(char str1[], char str2[],int frequency[])
{

    // Check length
    if(strlen(str1) != strlen(str2))
    {
        return false;
    }

    for(int i=0; i<strlen(str1); i++)
    {
        int asciiCode=(int) str1[i]; //convert character to ascii value
        frequency[asciiCode] = frequency[asciiCode] + 1;
    }

    for(int i=0; i<strlen(str2); i++)
    {
        int asciiCode=(int) str2[i];
        frequency[asciiCode] = frequency[asciiCode] - 1;
    }

    for(int i=0; i<256; i++)
    {
        if(frequency[i] != 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    char str1[100],str2[100];
    int frequency[256]={0};

    cin>>str1>>str2;

    bool res = checkPermutation(str1,str2,frequency);

    if(res==0)
        cout<<"false";
    else
        cout<<"true";

    return 0;
}
