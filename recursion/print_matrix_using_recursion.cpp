#include<iostream>
#include<vector>

using namespace std;

int printMatrix(vector<vector<int>> &vec, int n, int m, int i, int j)
{
     // If the entire column is traversed
    if(j >= m) return 0;

    // If the entire row is traversed
    if(i >= n) return 1;

    // Print the value of the current
    // cell of the matrix
    cout<<vec[i][j]<<" ";

    // Recursive call to traverse the matrix
    // in the Horizontal direction
    if(printMatrix(vec, m, n, i, j+1))
    {
        return 1;
    }

    // Recursive call for changing the
    // Row of the matrix
    return printMatrix(vec, m, n, i+1, 0);
}

int main()
{
    int n, m;
    cin>>n>>m;

    vector<vector<int>> vec;

    for(int i=0; i<n; i++)
    {
        vector<int> temp;
        for(int j=0; j<m; j++)
        {
            int val;
            cin>>val;
            temp.push_back(val);
        }
        vec.push_back(temp);
    }

    printMatrix(vec, n, m, 0, 0);

//    for(auto it1: vec)
//    {
//        for(auto it2: it1)
//        {
//            cout<<it2<<" ";
//        }
//        cout<<endl;
//    }

    return 0;
}
