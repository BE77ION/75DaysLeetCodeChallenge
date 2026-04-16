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


    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        int lh=hight(root->left);
        int rh=hight(root->right);
        int curr=lh+rh;
        int left=diameterOfBinaryTree(root->left);
        int right=diameterOfBinaryTree(root->right);
        return max(curr,max(left,right));
        
    }
};