/*

    Program:  All Indices of Number.
                   Given an array of length N and an integer x,
                   you need to find all the indexes where x is present in the input array.
                  Save all the indexes in an array (in increasing order).

    Sample Input :  5
                            9 8 10 8 8
                            8
    Sample Output: 1 3 4

*/

#include<iostream>

using namespace std;

int findAllIndices(int arr[], int size, int x,int output[])
{
    if(size == 0)
    {
        return 0;
    }

    // This section will get executed untill size =0, then m will have 0 which is return by if condition above.
    int m=findAllIndices(arr,size-1,x,output);

    // After above function from this execution will start in reverse manner(i.e. from 0 to n-1)
    //cout<<"m "<<m<<" "<<"size "<<size<<" "<<endl; -->m 0 size 1
                                                                                      //m 0 size 2
                                                                                     //m 0 size 3
                                                                                     //m 1 size 4
                                                                                     //m 2 size 5

    if(arr[size-1] == x)
    {
        output[m]=size-1;
        return m+1;
    }
    else
    {
        return m;
    }
}

int main()
{
    int n;
    cin>>n;

    int *arr = new int[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int x;
    cin>>x;

    int *output = new int[n];

    int res = findAllIndices(arr,n,x,output);

    //if not found
    if(res==-1)
    {
        cout<<res;
    }
    else
    {
        for(int i=0; i<res; i++)
        {
            cout<<output[i]<<" ";
        }
    }

    delete [] arr;
    delete [] output;

    return 0;
}
