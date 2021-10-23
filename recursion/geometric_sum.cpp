#include<iostream>
#include<math.h>

using namespace std;

float geometricSum(int k)
{
    if(k==0)
    {
        return 1;
    }

    float temp = 1 / pow(2,k);

    //cout<<temp<<" "<<k<<endl; //0.125     3
                                                 //0.25      2
                                               //0.5       1

    return geometricSum(k-1) + temp;
}

int main()
{
    int k;
    cin>>k;

    float f = geometricSum(k);
    cout<<endl<<"f="<<f;

    return 0;
}
