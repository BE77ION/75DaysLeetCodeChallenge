class Solution {
public:
    int findMin(vector<int>& nums) {
        int left=0;
        int right=nums.size()-1;
        int minn=INT_MAX;
        
        while(left<=right){
            int mid=(left+right)/2;
            //early break if array is fully sorted
            if(nums[left]<=nums[right]){
                minn=min(minn,nums[left]);
                break;
            }
            //eliminate left half and take smallest
            if(nums[mid]>=nums[left]){
                minn=min(minn,nums[left]);
                left=mid+1;
            }else{
                //elemenate righthalf take smallest
                right=mid-1;
                minn=min(minn,nums[mid]);
            }
        }
        return minn;
    }
};