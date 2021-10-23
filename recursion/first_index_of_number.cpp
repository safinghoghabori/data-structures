/*
    Program: Find index of given number

    input: 5 5 6 5 6
             5
    output: 0

    input: 5 5 6 5 6
             6
    output: 2

*/

#include<iostream>

using namespace std;

int firstIndex(int arr[], int n, int x, int currIndex)
{
    if(currIndex == n)
    {
        return -1;
    }

    if(arr[currIndex] == x)
    {
        return currIndex;
    }

    return firstIndex(arr, n, x, currIndex+1);

}

int main()
{
    int arr[5];
    int n=5;

    for(int i=0; i<5; i++)
    {
        cin>>arr[i];
    }

    int x;
    cin>>x;

    cout<<firstIndex(arr,n,x,0);

    return 0;
}
