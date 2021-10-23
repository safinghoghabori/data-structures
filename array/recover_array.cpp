/*

Problem: Given an original array with shuffling like below input, we need to convert that shuffled input into proper output.
watch video: https://mega.nz/fm/qFcRSC6T

input: 3 2 4 1 5 (HINT: we need to rectify how this formed from output.)
output: 1 2 3 4 5

input: 3 4 2 5 1 6
output: 1 2 3 4 5 6

(LOGIC: we need to rectify how this becomes, its nothing but mid and left right values change,
            however in odd array its mid-->left-->right whereas in even array its also left-->right but mid will be right.
)

*/

#include<iostream>

using namespace std;

void recoverArray(int input[], int n, int output[])
{
    int left,right;
    int i=0;
    if(n%2 != 0)
    {
        int mid=n/2;
        output[mid]=input[0];
        left=mid-1;
        right=mid+1;

        i++; //if enters into this condition(this can be known after wrinting program, so ignore it while seeing first time).
    }
    else
    {
        int mid=n/2;
        left=mid-1;
        right=mid;
    }

    //int i=1; We need to start i from 1 for odd case and 0 for even case, so we're moving it to the top.
    while(i<n)
    {
        output[left]=input[i];
        left--;
        i++;

        output[right]=input[i];
        right++;
        i++;
    }
}

int main()
{
    int input[100];

    int n;
    cin>>n;

    int output[100]; //we'll store output array into this

    for(int i=0;i<n;i++)
    {
        cin>>input[i];
    }

    recoverArray(input,n,output);

    //print output array
    for(int i=0;i<n;i++)
    {
        cout<<output[i];
    }

    return 0;
}
