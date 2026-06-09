class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(auto i:nums){
            mp[i]++;
        }
        vector<pair<int,int>>pairs(mp.begin(),mp.end());
        sort(pairs.begin(),pairs.end(),[](auto &a,auto&b){
            return a.second>b.second;
        });
        vector<int>ans;
        for(auto i:pairs){
            if(k>0){
                ans.push_back(i.first);
            }
            k--;
        }
        return ans;
    }
};