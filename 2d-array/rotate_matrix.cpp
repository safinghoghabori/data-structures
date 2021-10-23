/*

    Problem: You are given a square matrix, you have to turn this matrix by 90 degreesin the anti-clockwise direction.

    For example, if the given input matrix is:
    2 3 4  (Hint: focus column wise)
    5 6 7
    4 2 1

    The output matrix after rotation should be:
    4 7 1 (focus row wise)
    3 6 2
    2 5 4

    ----------------------------------

    How to Approach:
    step:1: Convet matrix into Transpose matrix(it means convert a[i][j] to a[j][i]
    step:2: Reverse matrix

*/

#include<iostream>

using namespace std;

void printMatrix(int arr[][100],int m,int n)
{
    // Print Matrix
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }
}

void transpose(int arr[][100],int m,int n)
{
    for(int i=0; i<m; i++)
    {
        for(int j=i; j<n; j++)
        {
            swap(arr[i][j],arr[j][i]);

//            int temp=arr[j][i];
//            arr[j][i]=arr[i][j];
//            arr[i][j]=temp;
        }
    }
}

// Reverse each column of matrix
void reverseColumn(int arr[][100],int m,int n)
{
    int k;
    for(int j=0; j<n; j++)
    {
        //we need to get first and last element of first column, so for first we can use i but for last we need to use another variable i.e. K by setting it to the last.
        k=n-1;
        for(int i=0;i<k; i++)
        {
            k--;
            swap(arr[j][i],arr[k][i]);

//            int temp=arr[i][j];
//            arr[i][j]=arr[k][j];
//            arr[k][j]=temp;
        }
    }
}

int main()
{
    int arr[100][100];

    int m,n;
    cin>>m>>n;

    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>arr[i][j];
        }
    }

    transpose(arr,m,n);
    reverseColumn(arr,m,n);
    printMatrix(arr,m,n);

    return 0;
}

