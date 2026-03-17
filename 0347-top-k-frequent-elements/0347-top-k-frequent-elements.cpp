class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(auto i:nums){
            mp[i]++;
        }
        vector<pair<int,int>>pairs(mp.begin(),mp.end());
        sort(pairs.begin(),pairs.end(),[](pair<int,int>&a,pair<int,int>&b){
            return a.second>b.second;
        });
        vector<int>ans;
        for(int i=0;i<pairs.size();i++){
            if(k>0){
                ans.push_back(pairs[i].first);
                k--;
            }
        }
        return ans;
    }
};