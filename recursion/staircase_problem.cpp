/**

    Problem: A child is running up a staircase with N steps, and can hop either 1 step, 2 steps or 3 steps at a time.
                Implement a method to count how many possible ways the child can run up to the stairs.
                You need to return number of possible ways W.

            Sample Input 1 :
            4
            Sample Output 1 :
            7

            Sample Input 2 :
            5
            Sample Output 2 :
            13
*/

#include<iostream>

using namespace std;

int climbStairs(int n)
{
    if(n < 0)
        return 0;
    if(n == 0)
        return 1;

    return climbStairs(n-1) + climbStairs(n-2) + climbStairs(n-3);
}

int main()
{
    int n;
    cin>>n;

    int res = climbStairs(n);
    cout<<res;

    return 0;
}
