/*

    Problem: find an element from 2d array. If element found return index, else -1.

    ------------------------
    Approach 1(Brute Force): Iterate through each elements and compare it with X(finding value). Which is kind of lenear search. It result in O(mxn) complexity.

    Approach 2: Use Binary Search and find middle element either from row or column. Time complexity = O(m log m) or O(n log n).

    Approach 3(use this,view in coding book for more): Go to top right element of matrix and compare with findind element X,
                                    if X greater than top element then move to down side else move left side on the same row.
                                    Given array is sorted, so left side will be less values, whereas right side will be more values.
                                    So by considering this we will do left and right movement to compare with X.
*/

#include<iostream>

using namespace std;

void findElement(int arr[][100], int m, int n,int x)
{
    int i=0;
    int j=n-1;

    while(i<m && j>=0)
    {
        if(x == arr[i][j])
        {
            cout<<i<<" "<<j<<endl;
            return;
        }
        else if(x > arr[i][j])
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    cout<<"-1"<<endl;
    return;
}

int main()
{
    int arr[100][100];
    int m,n;

    cin>>m>>n;

    for(int i=0; i<m; i++)
    {
        for(int j=0; j< n; j++)
        {
            cin>>arr[i][j];
        }
    }

    int x;
    cin>>x;

    findElement(arr,m,n,x);

    return 0;
}
