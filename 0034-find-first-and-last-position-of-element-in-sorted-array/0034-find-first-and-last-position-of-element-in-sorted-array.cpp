class Solution {
public:
    int binarysearch(vector<int>& nums, int target,bool searchleft) {
        int left = 0;
        int n = nums.size();
        int right = n - 1;
        int ex = -1;
        while (left <= right) {
            int mid = (left + right) / 2;
            if (nums[mid] > target) {
                right = mid - 1;
            } else if (nums[mid] < target) {
                left = mid + 1;
            } else {
                ex = mid;
                if (searchleft) {
                    right = mid - 1;
                } else {
                    left = mid + 1;
                }
            }
        }
        return ex;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        
        int first=binarysearch(nums,target,true);
        int last=binarysearch(nums,target,false);

        return {first,last};
    }
};