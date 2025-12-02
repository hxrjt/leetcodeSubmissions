// Last updated: 12/2/2025, 5:52:34 PM
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
    int dfsDepth(TreeNode* root){
        if(!root){
            return 0;
        }
        if(!root->left && !root->right){
            return 1;
        }
        int l=dfsDepth(root->left);
        int r=dfsDepth(root->right);

        if (!root->left) return r + 1;
        if (!root->right) return l + 1;

        return min(l,r)+1;
    }
public:
    int minDepth(TreeNode* root) {
        return dfsDepth(root);
    }
};