/*
    Problem: Multiplication without using multiplication sign, instead use any from addition or subtraction sign

    Sample Input 1 :
    3
    5
    Sample Output 1 :
    15

    Sample Input 2 : (Tip: this kind of so called worst case handled automatically by Base case implicitely. so we dont need to take care of it explicitely)
    4
    0
    Sample Output 2 :
    0

*/

#include<iostream>

using namespace std;

int multiplication(int m, int n)
{
    //suppose ----> m=3 n=2 ---> 6
    //base case
    if(n == 0)
    {
        return 0;
    }

    //recursive call (i.e. 3,1 [1st call]  --- 3,0 [2nd call])
    int k = multiplication(m, n-1);

    //calculations (i.e. 3+0=3[1st call] , 3+3=6[2st call] , Tip: it passes result to K, same concept when we return command goes to where we called the function)
    return k + m;
}

int main()
{
    int m,n;
    cin>>m>>n;

    int res = multiplication(m,n);
    cout<<res;

    return 0;
}
