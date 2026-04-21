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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==NULL){
            return ans;
        }
        queue<TreeNode*>q;
        q.push(root);
        int level=0;
        while(!q.empty()){
            int size=q.size();
            vector<int>temp(size);
            
                for(int j=0;j<size;j++){
                    TreeNode*node=q.front();
                    q.pop();
                    int index=(level%2)==0?j:(size-1-j);
                    temp[index]=node->val;
                    if(node->left!=NULL){
                        q.push(node->left);
                    }
                    if(node->right!=NULL){
                        q.push(node->right);
                    }
                } 
        ans.push_back(temp);
        level++;
        }
        return ans;
    }
};