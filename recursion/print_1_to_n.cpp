#include<iostream>

using namespace std;

void printOneToN(int n)
{
    if(n==0)
    {
        return;
    }

    printOneToN(n-1);
    cout<<n<<" ";
}

int main()
{
    int n;
    cin>>n;

    printOneToN(n);

    return 0;
}
