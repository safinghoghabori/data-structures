#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(int s=1;s<=n-i;s++)
        {
            cout<<" ";
        }

        int num=i;
        for(int k=1;k<=i;k++)
        {
                cout<<num++;
        }
        cout<<endl;
    }

    return 0;
}
