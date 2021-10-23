#include<iostream>

using namespace std;

int countZeros(int *arr, int n)
{
    if(n==0)
    {
        return 0;
    }

    int cnt=countZeros(arr,n-1);

    if(arr[n-1] == 0)
    {
        return ++cnt;
    }
    else
    {
        return cnt;
    }

}

int main()
{
    int n;
    cin>>n;

    int *arr=new int[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int res = countZeros(arr,n);
    cout<<res;

    delete [] arr;
    return 0;
}
