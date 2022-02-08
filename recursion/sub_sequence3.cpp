/**

    Problem: Print the subsets whose sum is divisible by k.

    Input: 4 3 2, k=3
    output: [3], [4,3,2], [4,2]

    (Hint--> Its nothing just added flavor into vanila icecream i.e. its upgraded version of print subsequences/subsets..... :P)

*/

#include<iostream>
#include<vector>

using namespace std;

void printSubSequence(int index, vector<int> &arr, int n, vector<int> &vec, int sum, int k)
{
    if(index == n)
    {
        //Print statement
        if(vec.size() != 0)
        {
            if(sum%k == 0)
            {
                for(auto it: vec)
                {
                    cout<<it<<" ";
                }
                cout<<endl;
            }
        }
        return;
    }

    vec.push_back(arr[index]);

    //do sum
    sum+=arr[index];

    // Pick it
    printSubSequence(index+1, arr, n, vec, sum, k);

    vec.pop_back();

    //empty sum
    sum-=arr[index];

    // Not pick
    printSubSequence(index+1, arr, n, vec, sum, k);
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
    printSubSequence(0,arr,n,vec, 0, k);

    return 0;
}
