class Solution {
public:
    int maxArea(vector<int>& nums) {
        int left=0;
        int right=nums.size()-1;
        int maxwater=INT_MIN;
        while(left<right){
            int hight=min(nums[left],nums[right]);
            int width=right-left;
            int maxi=hight*width;
            maxwater=max(maxwater,maxi);
            if(nums[left]<=nums[right]){
                left++;
            }else{
                right--;
            }
        }
        return maxwater;
    }
};