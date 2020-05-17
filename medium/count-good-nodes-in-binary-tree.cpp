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
    int goodNodes(TreeNode* root) {
        return dfs(root,INT32_MIN);
    }

    int dfs(TreeNode *root,int maxSoFar)
    {
        if(!root)
        {
            return 0;
        }
        int res=root->val>=maxSoFar?1:0;

        return res+dfs(root->left,max(maxSoFar,root->val))+dfs(root->right,max(root->val,maxSoFar));
    }
};
