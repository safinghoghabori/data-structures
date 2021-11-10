#include<iostream>

using namespace std;

int partitions(int a[], int start, int end)
{
    // Set 0th index element at the middle position where element left side of it is less than that element and element right side of it is more than that element.
    int pivot=a[start];
    int countSmaller = 0;

    for(int i=start + 1; i<=end; i++)
    {
        if(a[i] <= pivot)
        {
            countSmaller++;
        }
    }

    int pivotIndex = countSmaller + start;
    a[start] = a[pivotIndex];
    a[pivotIndex] = pivot;

    int left=start;
    int right=end;
    while(left < pivotIndex && right > pivotIndex)
    {
        if(a[left] <= pivot)
        {
            left++;
        }
        else if(a[right]> pivot)
        {
            right--;
        }
        else
        {
            swap(a[left],a[right]);
            left++;
            right--;
        }
    }
    return pivotIndex;
}

void quick_sort(int arr[], int si, int ei)
{
    // Base case
    if(si >= ei)
    {
        return;
    }

    int p = partitions(arr,si,ei);
    quick_sort(arr, si, p-1);
    quick_sort(arr, p+1, ei);
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

    quick_sort(arr,0,n-1);

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }

     return 0;
 }
