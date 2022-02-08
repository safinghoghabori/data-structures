#include<iostream>
#include<vector>

using namespace std;

void reverseArray(int  i, vector<int> &vec,int n)
{
    if(i >= n/2)
    {
        return;
    }

    swap(vec[i], vec[n-1-i]);

    reverseArray(i+1,vec,n);
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

    reverseArray(0,vec, vec.size());

    for(auto it: vec)
    {
        cout<<it<<" ";
    }
}
