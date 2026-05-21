class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(auto i:nums){
            mp[i]++;
        }
        vector<vector<int>>pairs(nums.size()+1);
       for(auto i:mp){
        pairs[i.second].push_back(i.first);
       }
        vector<int>ans;

        for(int i=pairs.size()-1;i>=0;i--){
            for(auto x:pairs[i]){
                ans.push_back(x);
                if(ans.size()==k){
                    return ans;
                }
            }
        }
        return {};
    }
};