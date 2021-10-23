#include<iostream>

using namespace std;

/*
    Best explanation of this pattern: https://codeforwin.org/2016/06/number-pattern-17-in-c.html
*/

int main()
{

    int n;
    cin>>n;

    //first upper half
    for(int i=n;i>=1;i--)
    {
        //first inner part of upper half
        for(int j=n;j>i;j--)
        {
            cout<<j;
        }
        //second inner part of upper half
        for(int  j=1; j<=(i*2-1); j++)
        {
            cout<<i;
        }

        //third inner part of upper half
        for(int j=i+1;j<=n;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }

    //second lower half
    for(int i=1; i<n; i++)
    {
        //first inner part of second lower
        for(int j=n; j>i; j--)
        {
            cout<<j;
        }

        //second inner part of upper half
        for(int j=1; j<=(i*2-1); j++)
        {
            cout<<i+1;
        }

        //third inner part of upper half
        for(int j=i+1;j<=n;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }

    return 0;
}
