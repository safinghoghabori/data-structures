/*

    Problem: Maximum Profit on App (NOTE: Check pdf in this for folder for this problem to get in detail)

    ----------------------------------------------------------------------------------------------

    Approach: In this problem we need to find X(app price) and print maximum profit, which should be the one such that the profit earned is maximised.

    step:1 Sort the budgets array(here question may arise why we Sort the array? we Sort the array so that we can easily find who can afford it by doing N-1)
    step:2 Iterate over bugest array values, pick each one and multiply it with N-1 means those who can afford it).
    spte:3 Use max function and find max as shown below, so that we can know how much max profit we can earn.

*/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void maxProfit(int n, vector<int> &vec)
{
    int x;
    sort(vec.begin(), vec.end());

    int maxVal=INT_MIN;
    for(int i=0; i<vec.size(); i++)
    {
        int temp=vec[i] * (n-i); // App_price(X) *  No of buyers
        maxVal=max(maxVal,temp);
    }

    cout<<maxVal;
}

int main()
{
    int n;
    cin>>n;

    vector<int> vec;

    for(int i=0; i<n; i++)
    {
        int val;
        cin>>val;

        vec.push_back(val);
    }

    maxProfit(n,vec);

    return 0;
}
