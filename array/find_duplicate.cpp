/*

Problem: Find duplicate from an array

(another approaches: https://mega.nz/fm/qFcRSC6T)

*/
#include<iostream>

using namespace std;

int findDuplicate(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i] == arr[j])
            {
                return arr[i];
            }
        }
    }
    return 0;
}

int main()
{
    int arr[100];

    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int res=findDuplicate(arr,n);
    cout<<res;

    //res==1 ? cout<<"Duplicate found" : cout<<"No duplicate found";

    return 0;
}
