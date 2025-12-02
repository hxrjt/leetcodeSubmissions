// Last updated: 12/2/2025, 5:52:43 PM
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
    bool dfs(TreeNode* p,TreeNode* q){
        if(p==NULL && q==NULL){
            return true;
        }
        else if((p!=NULL && q==NULL) || (p==NULL && q!=NULL)){
            return false;
        }
        if(p->val!=q->val){
            return false;
        }
        bool l=dfs(p->left,q->left);
        bool r=dfs(p->right,q->right);
        return l && r;
    }
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        return dfs(p,q);
    }
};