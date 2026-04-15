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
int hight(TreeNode* root){
    if(root==NULL){
        return 0;
    }
    int l=hight(root->left);
    int r=hight(root->right);
    
    return 1+max(l,r);
}
    bool isBalanced(TreeNode* root) {
        if(root==NULL){
            return true;
        }
        int lh=hight(root->left);
        int rh=hight(root->right);
        if(abs(lh-rh)<=1&&isBalanced(root->left)&&isBalanced(root->right))return true;
        return false;
    }
};