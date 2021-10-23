#include<iostream>

using namespace std;

int sumOfArray(int arr[], int size)
{
    if(size==0)
        return 0;

    int smallOutput1 = sumOfArray(arr+1, size-1); //or in one line---> return arr[0] + sumOfArray(arr+1,size-1);
    return arr[0] + smallOutput1;

}

int main()
{
    int arr[5];

    for(int i=0; i<5; i++)
    {
        cin>>arr[i];
    }

    int res = sumOfArray(arr,5);
    cout<<res;

    return 0;
}
