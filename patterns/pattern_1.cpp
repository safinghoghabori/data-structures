#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        int num=i;
        for(int k=(n-i)+1;k<=n;k++)
        {
            cout<<num++;
        }

        num--;
        for(int m=1;m<=i-1;m++)
        {
            cout<<--num;
        }
        cout<<endl;
    }

    return 0;
}
