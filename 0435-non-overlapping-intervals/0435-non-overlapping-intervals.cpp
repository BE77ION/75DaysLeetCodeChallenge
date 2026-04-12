class Solution {
public:
    
    int eraseOverlapIntervals(vector<vector<int>>& nums) {
        
        sort(nums.begin(),nums.end(),[](auto& a,auto& b){
            return b[1]>a[1];
        });
        int count=1;
        int lastendtime=nums[0][1];
        for(int i=1;i<nums.size();i++){
            if(nums[i][0]>=lastendtime){
                count++;
                lastendtime=nums[i][1];
            }
        }
        return nums.size()-count;
    }   
};