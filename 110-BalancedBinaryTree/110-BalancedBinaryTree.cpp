// Last updated: 12/2/2025, 5:52:36 PM
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
    int dfscheck(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        int l = dfscheck(root->left);
        int r = dfscheck(root->right);
        return max(l,r)+1;
    }
public:
    bool isBalanced(TreeNode* root) {
        if(!root){
            return true;
        }
        int lh=dfscheck(root->left);
        int rh=dfscheck(root->right);
        if(abs(lh-rh)>1){
            return false;
        }
        return (isBalanced(root->left) && isBalanced(root->right));
    }
};