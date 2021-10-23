/*
    Problem:

    a-->1 5 8 11 12
    b-->9 13 18 20

    output arr--> 1 5 8 9 11 12 13 18 20

*/

#include<iostream>

using namespace std;

void mergeTwoArray(int a[],int n1,int b[],int n2,int c[])
{
    int i=0,j=0,k=0;
    while(i<n1 && j<n2)
    {
        if(a[i]<b[j])
        {
            c[k]=a[i];
            k++;
            i++;
        }
        else
        {
            c[k]=b[j];
            k++;
            j++;
        }
    }

    while(i<n1)
    {
        c[k]=a[i];
        k++;
        i++;
    }

    while(j<n2)
    {
        c[k]=b[j];
        k++;
        j++;
    }
}

int main()
{
    int a[100];
    int b[100];
    int c[100];

    int n1,n2;
    cin>>n1>>n2;

    for(int i=0;i<n1;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n2;i++)
    {
        cin>>b[i];
    }

    mergeTwoArray(a,n1,b,n2,c);

    for(int i=0;i<n1+n2;i++)
    {
        cout<<c[i]<<" ";
    }

    return 0;
}
