/*

    Problem: Last Index of Number

    Sample Input : 4
                           9 8 10 8
                           8
    Sample Output : 3

*/

#include<iostream>

using namespace std;

int last_index(int *arr, int n, int x)
{
    if(n==0)
    {
        return -1;
    }

    // NOTE: if we check from right to left(we can do any, but in question here specifically mentioned dont do from n-1 so follow below method)
//    /f(arr[n] == x)
//    {
//        return n;
//    }

    //cout<<"before rcall "<<n<<" "; // 5 4 3 2 1(so when you want to start picking element from last, write small calculation i.e. 3rd step before recursive call)
    int k = last_index(arr, n-1, x);
    //cout<<"after rcall "<<n<<" "; //1 2 3 4 5(so when you want to start picking element from left, write small calculation i.e. 3rd step after recursive call)

    // NOTE: Here we are checking from left to right
    if(arr[n-1] == x)
    {
        k=n-1;
        return k;
    }
    else
    {
        return k;
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

    int res = last_index(arr,n,x);
    cout<<res;

    return 0;
}
