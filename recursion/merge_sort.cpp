#include<iostream>

using namespace std;

void merge(int arr[], int si, int ei)
{
    int size = ei - si + 1;
    int mid =  (si + ei) / 2;

    int *output = new int[size]; // This will store output which will be final merged sorted array

    int i=si; // Starting index of first half
    int j=mid+1; // Starting index of second half
    int k=0; // To insert element into output array by starting from 0.


    while(i <= mid && j <= ei)
    {
        // Compare first half and second half elements and store small into output array.
        if(arr[i] < arr[j])
        {
            output[k] = arr[i];
            i++;
            k++;
        }
        else
        {
            output[k]=arr[j];
            j++;
            k++;
        }
    }

    // If remaining elements left in either first or second half
    while(i <= mid)
    {
        output[k]=arr[i];
        i++;
        k++;
    }
    while(j <= ei)
    {
        output[k]=arr[j];
        j++;
        k++;
    }

    // Copy output array into actual array
    int m=0;
    for(int i=si; i<=ei; i++)
    {
        arr[i] = output[m];
        m++;
    }

    delete [] output;
}

void merge_sort(int arr[], int si, int ei)
{
    // Base case
    if(si >= ei)
    {
        return;
    }

    int mid = (si + ei) / 2;

    merge_sort(arr, si, mid);
    merge_sort(arr, mid+1, ei);

    merge(arr,si,ei);
}

int main()
{
    int arr[100];
    int n;

    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    merge_sort(arr,0,n-1);

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
