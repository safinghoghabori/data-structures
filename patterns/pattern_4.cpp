#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=1; i<=(n+1)/2; i++)
    {
        for(int sp=1;sp<=i-1;sp++)
        {
            cout<<" ";
        }
        for(int k=1;k<=i;k++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=n/2;i>=1;i--)
    {
        for(int sp=i-1;sp>=1;sp--)
        {
            cout<<" ";
        }
        for(int k=i;k>=1;k--)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}
