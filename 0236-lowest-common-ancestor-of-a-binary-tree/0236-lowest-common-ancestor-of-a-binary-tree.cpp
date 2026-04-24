/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool solve(TreeNode* root,TreeNode*t,vector<TreeNode*>&ans){
        if(root==NULL)return false;
        ans.push_back(root);
        if(root==t)return true;
        if(solve(root->left,t,ans)||solve(root->right,t,ans)){
            return true;
        }
        ans.pop_back();
        return false;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*>p1,p2;
        solve(root,p,p1);
        solve(root,q,p2);
        int i=0;
        for(i=0;i<p1.size()&&i<p2.size();i++){
            if(p1[i]!=p2[i]){
                break;
            }
        }
        return p1[i-1];
    }
};