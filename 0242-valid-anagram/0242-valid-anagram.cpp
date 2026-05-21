class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())return false;
        unordered_map<int,int>mp;
        for(auto i:s){
            mp[i]++;
        }
        for(auto i:t){
            mp[i]--;
        }
        for(auto i:mp){
            if(i.second>0){
                return false;
            }
        }
        return true;
    }
};