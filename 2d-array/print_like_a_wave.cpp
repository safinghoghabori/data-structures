#include<iostream>
#include<vector>

using namespace std;

void printAWave(vector<vector<int>> vec,int m, int n)
{
    for(int j=0; j<n; j++)
    {
        if(j%2 == 0)
        {
            for(int i=0; i<m; i++)
            {
                cout<<vec[i][j]<<" ";
            }
        }
        else
        {
             for(int i=m-1; i>=0; i--)
            {
                cout<<vec[i][j]<<" ";
            }
        }
    }
}

int main()
{
    int m,n;
    cin>>m>>n;

    vector<vector<int>> vec(m, vector<int> (n));

    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            int val;
            cin>>val;
            vec[i][j]=val;
        }
    }

    printAWave(vec,m,n);

//    for(auto it: vec)
//    {
//        for(auto x: it)
//        {
//            cout<<x;
//        }
//        cout<<endl;
//    }
    return 0;
}

