class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        return atmostk(nums,k)-atmostk(nums,k-1);
    }
    int atmostk(vector<int>& nums, int k){
        int nice=0;
        int l=0;
        int r=0;
        int n=nums.size();
        int sum=0;
        while(r<n){
            sum+=nums[r]%2;
            while(sum>k){
                sum=sum-nums[l]%2;
                l++; 
            }
            if(sum<=k){
                nice=nice+(r-l+1);
            }
            
            r++;
        }
        return nice;
    }
};