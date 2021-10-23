/*

    Problem: Check if given array is sorted or not

*/

#include<iostream>

using namespace std;

bool isSorted(int a[],int size)
{
    if(size== 0 || size== 1)
    {
        return true;
    }
    if(a[0] > a[1])
    {
        return false;
    }

    int smallOutput = isSorted(a+1, size-1);
    return smallOutput;
}

int main()
{
    int arr[5];

    for(int i=0; i<5;i++)
    {
        cin>>arr[i];
    }

   isSorted(arr,5) ? cout<<"true" : cout<<"false";

    return 0;
}
