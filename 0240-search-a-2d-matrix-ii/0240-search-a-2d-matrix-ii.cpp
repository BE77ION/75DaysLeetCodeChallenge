class Solution {
public:
    bool bs(vector<int>&matrix,int t){
        int low=0;
        int high=matrix.size()-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(matrix[mid]==t)return true;
            else if(matrix[mid]<t){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        return false;
    } 
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<n;i++){
            if(bs(matrix[i],target)){
                return true;
            }
        }
        return false;
    }
};