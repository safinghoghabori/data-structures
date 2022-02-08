/**

    Problem: Given an integer N, find and return the count of minimum numbers, sum of whose squares is equal to N.
                That is, if N is 4, then we can represent it as : {1^2 + 1^2 + 1^2 + 1^2} and {2^2}.
                Output will be 1, as 1 is the minimum count of numbers required.

                Sample Input 1 :
                12
                Sample Output 1 :
                3
                Sample Output 1 Explanation :
                12 can be represented as :
                1^1 + 1^1 + 1^1 + 1^1 + 1^1 + 1^1 + 1^1 + 1^1 + 1^1 + 1^1 + 1^1 + 1^1
                1^1 + 1^1 + 1^1 + 1^1 + 1^1 + 1^1 + 1^1 + 1^1 + 2^2
                1^1 + 1^1 + 1^1 + 1^1 + 2^2 + 2^2
                2^2 + 2^2 + 2^2
                As we can see, the output should be 3.

                Sample Input 2 :
                9
                Sample Output 2 :
                1

*/

#include<iostream>

using namespace std;

int cnt=0;
int minimum_count(int n)
{
    if(cnt >100) return 1; cnt++;

    if(n==0 || n==1 || n==2 || n==3)
    {
        return n;
    }

    int ans = 10000;
    for(int i=1; i*i <= n; i++)
    {
        ans = min(ans, 1 + minimum_count(n - i*i));
        cout<<cnt<<"ans-->"<<ans<<" "<<"i="<<i<<" | ";
    }

    return ans;
}

int main()
{
    int n;
    cin>>n;

    int res = minimum_count(n);
    cout<<res;

    return 0;
}
