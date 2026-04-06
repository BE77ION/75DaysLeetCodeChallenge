class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return kk(nums,k)-kk(nums,k-1);
        
    }
    int kk(vector<int>& nums, int k){
        int count=0;
        unordered_map<int,int>mp;
        int l=0;int r=0;
        int n=nums.size();
        while(r<n){
            mp[nums[r]]++;
            while(mp.size()>k){
                mp[nums[l]]--;
                if(mp[nums[l]]==0){
                    mp.erase(nums[l]);
                }
                l++;
            }
            if(mp.size()<=k){
                count+=r-l+1;
            }
            r++;
        }
        return count;
    }
};