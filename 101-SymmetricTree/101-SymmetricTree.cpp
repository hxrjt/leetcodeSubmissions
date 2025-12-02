// Last updated: 12/2/2025, 5:52:41 PM
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
    bool inorder(TreeNode* l,TreeNode* r){
        if(l && r){
            if(!inorder(l->left,r->right)) return false;
            if(l->val!=r->val) return false;
            if(!inorder(l->right,r->left)) return false;;
        }
        else if(!l && r || l && !r){
            return false;
        }
        return true;
    }
public:
    bool isSymmetric(TreeNode* root) {
        return inorder(root,root);
    }
};