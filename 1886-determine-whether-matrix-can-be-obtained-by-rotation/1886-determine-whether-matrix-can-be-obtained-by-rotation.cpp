class Solution {
public:
    void rotate90(vector<vector<int>>& mat){
        reverse(mat.begin(),mat.end());
        int m=mat.size();
        int n=mat[0].size();
        for(int i=0;i<m;i++){
            for(int j=i+1;j<n;j++){
               swap(mat[i][j],mat[j][i]);
            }
        }
    }
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        if(mat==target)return true;
        for(int i=0;i<4;i++){
            rotate90(mat);
            if(mat==target)return true;
        }
        return false;
    }
};