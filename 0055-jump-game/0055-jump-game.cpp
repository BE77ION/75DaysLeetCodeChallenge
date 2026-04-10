class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxleap=0;
        for(int i=0;i<nums.size();i++){
            if(i>maxleap)return false;
            maxleap=max(maxleap,i+nums[i]);
        }
        return true;
    }
};