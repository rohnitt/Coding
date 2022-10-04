/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool ans=false;
    void dfs(TreeNode *root, int sum, int targetSum)
    {
        if(root == NULL) return;
        sum += root->val;
        if(root->left == NULL and root->right == NULL and sum == targetSum)
        {
            ans = true;
            return;
        }
        dfs(root->left, sum, targetSum);
        dfs(root->right, sum, targetSum);
    }
    
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root == NULL) return false;
        int sum = 0;
       // bool ans = false;
        dfs(root,sum,targetSum);
        return ans;
    }
};