/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left->val;
 *     TreeNode *right->val;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
void  solve(TreeNode* root,vector<int>&arr){
    if(root==NULL){
        arr.push_back(INT_MIN);
            return ;
        }
       
        arr.push_back(root->val);
        solve(root->left,arr);
        
        
            
        solve(root->right,arr);
        
        

}
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root==NULL&&subRoot==NULL){
            return true;
        }
        if(root==NULL||subRoot==NULL){
            return false;
        }
        vector<int>arr;
        vector<int>arr2;
        solve(root,arr);
        solve(subRoot,arr2);
        auto it=search(arr.begin(),arr.end(),arr2.begin(),arr2.end());
        if(it!=arr.end()){
            return true;
        }
        return false;
    }
};