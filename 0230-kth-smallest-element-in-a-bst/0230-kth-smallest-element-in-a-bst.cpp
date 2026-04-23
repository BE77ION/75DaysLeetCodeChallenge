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
    void solve(TreeNode*root, priority_queue<int,vector<int>,greater<int>>&p){
        if(root==NULL){
            return; 
        }
        p.push(root->val);
        if(root->left!=NULL)solve(root->left,p);
        if(root->right!=NULL)solve(root->right,p);
    }
    int kthSmallest(TreeNode* root, int k) {
        priority_queue<int,vector<int>,greater<int>>p;
        solve(root,p);
        if(!p.empty()){
            for(int i=1;i<k;i++){
                p.pop();
            }
        }
        return p.top();
    }
};