/**

    Problem: Count the subsets whose sum is divisible by k.

     Input: 4 3 2, k=3
    output:3( [3], [4,3,2], [4,2] )

    (Hint--> Its nothing just added flavor into vanila icecream i.e. its upgraded version of print subsequences/subsets..... :P)

*/

#include<iostream>
#include<vector>

using namespace std;

int printSubSequence(int index, vector<int> &arr, int n, vector<int> &vec, int sum, int k)
{
    if(index == n)
    {
        //Print statement
        // MASTERPIECE Advice: Whenever you wanna return count/print count always put base case as "return 1" to count and "return 0" for not to count.
                                            //No need of taking "count" variable and keep incresing it. Actually its bad practice else no issue :P
        if(vec.size() != 0)
        {
            if(sum%k == 0)
            {
               return 1;
            }
            else
            {
                return 0;
            }
        }
    }

    vec.push_back(arr[index]);

    //do sum
    sum+=arr[index];

    // Pick it
    int a = printSubSequence(index+1, arr, n, vec, sum, k);

    //vec.pop_back();

    //empty sum
    sum-=arr[index];

    // Not pick
    int b = printSubSequence(index+1, arr, n, vec, sum, k);

    // Return count
    return a+b;
}

int main()
{
    int n;
    cin>>n;

    vector<int> arr;
    for(int i=0; i<n; i++)
    {
        int val;
        cin>>val;
        arr.push_back(val);
    }

    int k;
    cin>>k;

    vector<int> vec;
    int res = printSubSequence(0,arr,n,vec, 0, k);

    // Attention: Empty subset is getting included so subtract by one.
    cout<<res-1;

    return 0;
}

