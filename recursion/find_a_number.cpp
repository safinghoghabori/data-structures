#include<iostream>

using namespace std;

bool findNumber(int arr[], int size, int y)
{
    if(size == 0)
    {
        return false;
    }
    else if(arr[0] == y) // Each time arr[0] will be different bcuz we're passing arr+1 each time, if we compare here, we can get results.
    {
        return true;
    }
    cout<<arr[0]<<endl;
    return findNumber(arr+1,size-1,y);
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

    findNumber(arr,n,x) ? cout<<"true" : cout<<"false";
    return 0;
}
