/*

    Problem: Equal sum pair (NOTE: Read more in pdf of this problem, available in this folder)

    ------------------------------------------------------

    Approach(https://www.geeksforgeeks.org/print-all-pairs-in-an-unsorted-array-with-equal-sum/):
                    Use map and pair container of STL. Use int for key and vector for making pair.
                    Make pair of each word by iterating over them and do sum of those pairs.
                    Then print pair which has equal sum.

    [Concept of Map: It always stores unique keys.
                              Key can by reffered using "first" and value using "second" i.e. it -> first, it -> second. here -> operator is used
                              in Pair first and second value can be accessed using the first and second too but using "." operator instead of ->.

*/

#include<iostream>
#include<map>
#include<vector>

using namespace std;

bool equalSumPair(vector<int> vec)
{
    map <int, vector<pair<int,int>>> mp;

    for(int i=0; i< vec.size(); i++)
    {
        for(int j=i+1; j< vec.size(); j++)
        {
            pair<int,int> p=make_pair(vec[i], vec[j]);
            mp[vec[i] + vec[j]].push_back(p); // Here its storing sum of ith and jth of vec, so when the sum is equal it will store only one because its key and it remains unique.
                                                             //  However it will store pair of both pair(i,j) whose sum is equal. And neverthless to say, its vector and we are using push_back
                                                            // which will dynamically add those pair into vector<pair<int><int>>
        }
    }

    for(auto it=mp.begin(); it!=mp.end(); it++)
    {
        //cout<< it->first <<endl;  // Just for debugging purpose.
        //cout<<it->second.size()<<" ";

        if(it->second.size() > 1)
        {
            return true;
//            for(int i=0; i<it->second.size(); i++)  // Just for debugging purpose.
//            {
//                cout<<it->second[i].first<<", ";
//                cout<<it->second[i].second<<endl;
//            }
//            cout<<"Sum is "<<it->first<<endl;
        }
    }
    return false;
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

    bool res = equalSumPair(vec);
    if(res)
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }

    return 0;
}
