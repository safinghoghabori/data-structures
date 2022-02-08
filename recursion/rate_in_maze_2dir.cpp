/**

    Problem : Given m x n matrix print the paths such as user can go from (0,0) to (1,1) i.e. start to end.
                    Consider user can move in 2 direction only. i.e. Right and Down.

*/

#include<iostream>

using namespace std;

void findPaths(int i, int j, int m, int n, string str)
{
    if(i>=m || j>=n) return;

    if(i == m-1 && j == n-1)
    {
        cout<<str<<endl;
        return;
    }

    str+="D"; // Down
    findPaths(i+1, j, m, n, str);

    str.pop_back(); // We're poping element cuz when i reaches to 3rd index(that is out of matrix) it tooks "D"
                            // so remove it. Draw recursive tree for more understading.

    str+="R"; // Right
    findPaths(i, j+1, m, n, str);
}

int main()
{
    int m,n;
    cin>>m>>n;

    findPaths(0, 0, m, n, "");

    return 0;
}
