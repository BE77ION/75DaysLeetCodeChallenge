class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        for(auto i:s){
            mp[i]++;
        }
        vector<pair<char,int>>ans(mp.begin(),mp.end());
       
        sort(ans.begin(),ans.end(),[](auto&a,auto&b){
            if(a.second!=b.second){
            return a.second>b.second;//decreasing order high first tyhen low
            }
            return a.first<b.first;//small first
        });
        string a;
        for(auto i:ans){
            for(int j=0;j<i.second;j++){
                a+=i.first;//count,char
        }
        }
        return a;
    }
};