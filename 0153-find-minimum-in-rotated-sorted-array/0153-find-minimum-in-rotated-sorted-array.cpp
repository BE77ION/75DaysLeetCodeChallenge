class Solution {
public:
    int findMin(vector<int>& nums) {
        int left=0;
        int right=nums.size()-1;
        int mini=INT_MAX;

        while(left<=right){
            int mid=(left+right)/2;
            if(nums[mid]>=nums[left]){
                mini=min(mini,nums[left]);
                left=mid+1;
            }else{
                right=mid-1;
                mini=min(mini,nums[mid]);
            }
        }
        return mini;
    }
};