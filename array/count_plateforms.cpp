/*

    Problem: Given two arrays (both of size n), one containing arrival time of trains and other containing the corresponding trains departure time (in the form of an integer)
                  respectively. Return the minimum number of platform required, such that no train waits.
                  Arrival and departure time of a train can't be same.
                  (GFG: https://www.geeksforgeeks.org/minimum-number-platforms-required-railwaybus-station/)

    Sample Input 1 : 6
    900 940 950 1100 1500 1800
    910 1200 1120 1130 1900 2000
    Sample Output 1 --> 3

    Sample Input 2 :4
    1100 1101 1103 1105
    1110 1102 1104 1106
    Sample Output 2 --> 2


*/

#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int findMinimumPlatform(vector<int> &arr, vector<int> &dep)
{
    // Sort both array
    sort(arr.begin(), arr.end());
    sort(dep.begin(), dep.end());

    int i=1,j=0,res=1;
    int plat_needed=1;
    while(i < arr.size() && j < dep.size())
    {
        // increment count of platforms needed
        // it means next train coming before departure of previous one
        if(dep[j] >= arr[i])
        {
            plat_needed++;
            i++;
        }

        // Else decrement count of platforms needed
        // it means next train comes after departure of previous one.
        else if(arr[i] > dep[j])
        {
            plat_needed--;
            j++;
        }

        // Update result if needed
        if(plat_needed > res)
        {
            res=plat_needed;
        }
    }
    return res;
}

int main()
{
    vector<int> arr;
    vector<int> dep;

    int n;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        int val1,val2;
        cin>>val1>>val2;
        arr.push_back(val1);
        dep.push_back(val2);
    }

    int res = findMinimumPlatform(arr,dep);
    cout<<"Minimum number of plateform: "<<res;

    return 0;
}
