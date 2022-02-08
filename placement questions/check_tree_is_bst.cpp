class Solution {
public:
    /* Solution from: https://www.youtube.com/watch?v=f-sj7I5oXEI  
        Leetcode:   https://leetcode.com/problems/validate-binary-search-tree/
    */
    bool validate(TreeNode* root, int minVal, int maxVal)
    {
        // Null tree is also valid binary search tree
        if(root == NULL)
        {
            return true;
        }
        
        //root val should not be less than minVal(left tree node), if it is then return false
        //same root val should not be greater than maxVal(right tree node), if so return false
        if(root->val <= minVal || root->val >= maxVal)
        {
            return false;
        }
        
        return validate(root->left, minVal, root->val) && validate(root->right, root->val, maxVal);
    }
    
    bool isValidBST(TreeNode* root) {
        return validate(root, INT_MIN, INT_MAX);
    }
};