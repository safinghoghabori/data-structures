/**

    Problem : Given m x n matrix print the paths such as user can go from (0,0) to (1,1) i.e. start to end.
                  Consider user can move in 4 direction. i.e. Right, Down, Up, Left.

*/

#include<iostream>
#include<string>
#include<vector>

using namespace std;

void rateInMaze(int i, int j, int m, int n, string s, vector<vector<int>> &vis)
{
    if(i >=m || j >=n || i < 0 || j < 0 || vis[i][j] == 1) return;

    if(i == m-1 && j == n-1)
    {
        cout<<s<<endl;
        return;
    }

    // Mark visited cell as 1(its hashing concept)
    vis[i][j] = 1;

    s+="D";
    rateInMaze(i+1, j, m, n, s, vis);
    s.pop_back();

    s+="R";
    rateInMaze(i, j+1, m, n, s, vis);
    s.pop_back();

    s+="L";
    rateInMaze(i, j-1, m, n, s, vis);
    s.pop_back();

    s+="U";
    rateInMaze(i-1, j, m, n, s, vis);
    s.pop_back();

    // Remove mark
    vis[i][j] = 0;
}

int main()
{
    int m,n;
    cin>>m>>n;

    // M x N vector created for hashing
    vector<vector<int>> vis(m, vector<int>(n, 0));

    rateInMaze(0, 0, m, n, "", vis);

    return 0;
}
