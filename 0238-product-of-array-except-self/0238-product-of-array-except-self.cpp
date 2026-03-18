class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        //prefix
        vector<int>ans(nums.size(),1);
        int pro=1;
        for(int i=0;i<nums.size();i++){
            ans[i]=pro;
            pro*=nums[i];
        }
        pro=1;
        for(int j=nums.size()-1;j>=0;j--){
            ans[j]*=pro;
            pro*=nums[j];
        }
        
        return ans;
    }
};