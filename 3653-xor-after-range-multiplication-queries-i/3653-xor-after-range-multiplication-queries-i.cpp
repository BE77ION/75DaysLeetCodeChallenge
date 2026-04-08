class Solution {
public:
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int mod=1e9+7;
        for(auto i:queries){
            int l=i[0];
            int r=i[1];
            int k=i[2];
            int v=i[3];
            for(int i=l;i<=r;i+=k){
                nums[i]=(1LL*nums[i]*v)%mod;
            }
        }
        int x=0;
        for(int i=0;i<nums.size();i++){
            x=nums[i]^x;
        }
        return x;
    }
};