class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int k) {
        return atmost(nums,k)-atmost(nums,k-1);

    }
    int atmost(vector<int>& nums, int k){
        int n=nums.size();
        int count=0;
        if(k < 0) return 0;
        int l=0;int r=0;int sum=0;
        while(r<n){
            sum+=nums[r];
            while(sum>k){
                sum=sum-nums[l];
                l++;
            }
            if(sum<=k){
                count=count+(r-l+1);
            }
            r++;
        }
        return count;
    }
};