/*

    Problem(Check out PDF in this folder for more): Sort 0 1 and 2 in ascending order.

    input--> 1 0 2 1 0 1 2 0
    output--> 0 0 0 1 1 1 2 2

*/

#include<iostream>
#include<vector>

using namespace std;

void sort123(vector <int> &vec)
{
    int current=0;
    int zeroPos=0;
    int twoPos=vec.size()-1;

    //here we wont loop untill N, because at last we are putting 2s so we dont need to go till last,
    //and we're decreamenting twoPos so we can check between current and twoPos index terminate the loop.
    while(current <= twoPos)
    {
        if(vec[current] == 0){
            swap(vec[current],vec[zeroPos]);
            current++;
            zeroPos++;
        }
        else if(vec[current] == 1){
            current++;
        }
        else{
            swap(vec[current], vec[twoPos]);
            twoPos--; // Here we wont do curr++ because we dont know what will we get after swapping(that we will get from last position to current position so...for more check this question PDF.
        }
    }
}

int main()
{
    vector<int> v;

    int n;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        int val;
        cin>>val;
        v.push_back(val);
    }

    sort123(v);

    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i];
    }

    return 0;
}
