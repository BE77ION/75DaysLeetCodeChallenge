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
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==NULL){
            return false;
        }
        stack<pair<TreeNode*,int>>st;
        st.push({root,root->val});
        while(!st.empty()){
            pair<TreeNode*,int>p=st.top();
            st.pop();
            if(p.first->left==NULL&&p.first->right==NULL&&p.second==targetSum){
                return true;
            }
            if(p.first->left!=NULL){
                st.push({p.first->left,p.second+p.first->left->val});
            } 
            if(p.first->right!=NULL){
                st.push({p.first->right,p.second+p.first->right->val});
            }
        }
        return false;
    }
};