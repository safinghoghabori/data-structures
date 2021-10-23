/*

    Problem: Leaders in Array.
                 Given an integer array A of size n. Find and print all the leaders present in the input array.
                 An array element A[i] is called Leader, if all the elements following it (i.e. all present at its right) are less than or equal to A[i].

    for example,
        input: 3 12 34 2 0 -1
        output: 34 2 0 -1

        input: 13 17 5 4 6
        output: 17 6

        ------------------------------------------------------------------
        Brute force Approach(O(n*n)): Compare each elements of Array to all following elements(if greate than this element found then stop there)
                                        So we need to 2 loop and complexity will be O(N*N);

        Approach 2(O(n)): Start from right and store rightmost element into max_right variable.
                                    Now go to left side and compare each element with max_right variable,
                                    if element is greater than max_right then print it, and store into max_right
                                    else do nothing/ignore.

        Note: Always rightmost element is considered as Leader.
*/

#include<iostream>
#include<vector>

using namespace std;

//----BRUTE FORCE
//void leadersInArray(vector<int> vec)
//{
//    for(int i=0; i<vec.size(); i++)
//    {
//        int j;
//        for(j=i+1; j<vec.size(); j++)
//        {
//            if(vec[i] <= vec[j]) //if big element is there on right side then break
//                break;
//        }
//        //if j equals to size of vector it means that its greater than following elements
//        if(j == vec.size())
//            cout<<vec[i]<<" ";
//    }
//}


//Approach-2
void leadersInArray(vector<int> vec)
{
    ///* Rightmost element is always leader *///
    int max_right=vec[vec.size()-1];
    cout<<max_right<<" ";

    for(int i=vec.size()-2; i>=0; i--)
    {
        if(vec[i] > max_right)
        {
            max_right=vec[i];
            cout<<max_right<<" ";
        }
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

    leadersInArray(vec);

    return 0;
}
