/*

    Problem(for more check pdf from this folder): You have been given a random integer array/list(ARR) of size N.
                You have been required to push all the zeros that are present in the array/list to the end of it.
                Also, make sure to maintain the relative order of the non-zero elements.

    Note:
            Change in the input array/list itself. You don't need to return or print the elements.
            You need to do this in one scan of array only. Don't use extra space.

    for example,
        input--> 2 0 0 1 3 0 0
        output--> 2 1 3 0 0 0 0 (here maintained order of 2 1 3)

*/

#include<iostream>
#include<vector>

using namespace std;

void pushZerosToEnd(vector<int> &vec)
{
    int current=0;
    int k=0;

    while(current < vec.size())
    {
        if(vec[current] != 0){
            swap(vec[current],vec[k]);
            k++;
        }
        current++;
    }
}

int main()
{
    vector<int> vec;

    int n;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        int val;
        cin>>val;
        vec.push_back(val);
    }

    pushZerosToEnd(vec);

    // Print vector
   for(int i=0; i<vec.size(); i++)
   {
       cout<<vec[i]<<" ";
   }

    return 0;
}
