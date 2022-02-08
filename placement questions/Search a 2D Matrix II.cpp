/* Approach: https://leetcode.com/problems/search-a-2d-matrix-ii/discuss/66139/C%2B%2B-search-from-top-right  
    leetcode: https://leetcode.com/problems/search-a-2d-matrix-ii
*/

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=0;
        int col=matrix[0].size()-1;
        
        while(row < matrix.size() && col>=0)
        {
            if(target == matrix[row][col])
            {
                return true;
            }
            
            target > matrix[row][col] ? row++ : col--;
        }
        return false;
    }
};