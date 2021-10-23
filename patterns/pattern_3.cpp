#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
            for(int k=1;k<=i;k++)
            {
                cout<<k;
            }
            for(int sp=(n*2-i*2);sp>=1;sp--)
            {
                cout<<" ";
            }
            for(int j=i;j>=1;j--)
            {
                cout<<j;
            }
            cout<<endl;
    }

    return 0;
}
