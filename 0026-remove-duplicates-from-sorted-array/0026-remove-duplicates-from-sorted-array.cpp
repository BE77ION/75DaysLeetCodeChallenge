class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int>ans;
        if(nums.size()==0)return 0;
        ans.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=ans.back()){
                ans.push_back(nums[i]);
            }
        }
        for(int i=0;i<ans.size();i++){
            nums[i]=ans[i];
        }
        return ans.size();
    }
};