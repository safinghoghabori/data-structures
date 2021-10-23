/*

    Problem: Print a spiral matrix

*/

#include<iostream>

using namespace std;

void printSpiral(int arr[][100],int m, int n)
{
   int top=0;
   int left=0;
   int bottom=m-1;
   int right=n-1;

   while(left<=right && top<=bottom)
   {
       //printing left to right(i is iterator)
       for(int i=left; i<=right; i++)
       {
           cout<<arr[top][i]<<" ";
       }
       top++;

       //printing top to bottom
       for(int i=top; i<=bottom; i++)
       {
           cout<<arr[i][right]<<" ";
       }
       right--;

       //printing right to left
       if(top<=bottom)
       {
           for(int i=right; i>=left; i--)
           {
               cout<<arr[bottom][i]<<" ";
           }
           bottom--;
       }

       //printing bottom to up
       if(left<=right)
       {
           for(int i=bottom; i>=top; i--)
           {
               cout<<arr[i][left]<<" ";
           }
           left++;
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

    printSpiral(arr,m,n);

    return 0;
}
