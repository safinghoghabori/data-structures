#include<iostream>

using namespace std;

int fib(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }

    int smallOutput1=fib(n-1);
    cout<<"smallOutput1-->"<<smallOutput1<<" n-->"<<n<<endl;
    int smallOutput2=fib(n-2);
    cout<<"smallOutput2-->"<<smallOutput2<<" n-->"<<n<<endl;
    return smallOutput1 + smallOutput2;
}

int main()
{
    int n;
    cin>>n;

    cout<<fib(n);

    return 0;
}
