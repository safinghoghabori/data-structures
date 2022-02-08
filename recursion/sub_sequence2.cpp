/**

    Problem: Print all subsequences/subsets

*/

#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

void printSubSequence(int index, vector<int> &arr, int n, vector<int> &vec)
{
    if(index == n)
    {
        //Print statement
        if(vec.size() != 0) // This condition is for ignoring blank subset/subsequence
        {
            for(auto it: vec)
            {
                cout<<it<<" ";
            }
            cout<<endl;
        }
        return;
    }

    vec.push_back(arr[index]);

    // Pick it
    printSubSequence(index+1, arr, n, vec);

    vec.pop_back();

    // Not pick
    printSubSequence(index+1, arr, n, vec);
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

    vector<int> vec;
    printSubSequence(0,arr,n,vec);

    return 0;
}
