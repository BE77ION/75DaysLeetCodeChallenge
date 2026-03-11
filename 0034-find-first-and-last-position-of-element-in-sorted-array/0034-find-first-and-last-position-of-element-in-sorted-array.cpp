class Solution {
public:
    int frst(vector<int>& nums, int target){
        int left=0;
        int right=nums.size()-1;
        int ans=-1;
        while(left<=right){
            int mid=(left+right)/2;
            if(nums[mid]>=target){
                ans=mid;
                right=mid-1;
            }else{
                left=mid+1;
            }
        }
        return ans;
    }
    int lst(vector<int>& nums, int target){
        int left=0;
        int right=nums.size()-1;
        int ans=-1;
        while(left<=right){
            int mid=(left+right)/2;
            if(nums[mid]<=target){
                ans=mid;
                left=mid+1;
            }else{
                right=mid-1;
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
       int first=frst(nums,target);
       if(first==-1||nums[first]!=target)return {-1,-1};
       int last=lst(nums,target);
        
       return {first,last};
    }
};