class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int left=0;
        int n=nums.size();
        int right=n-1;
        if(n==1)return 0;
        if(nums[0]>nums[1]){
            return 0;
        }
        if(nums[n-2]<nums[n-1])return n-1;
        while(left<right){
            int mid=left+(right-left)/2;
            if(nums[mid]>nums[mid+1]&&nums[mid]>nums[mid-1]){
                return mid;
            }
            else if(nums[mid]>nums[mid-1]){
                left=mid+1;
            }else{
                right=mid;
            }
        }
        return left;
    }
};