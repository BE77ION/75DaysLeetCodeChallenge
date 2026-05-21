class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())return false;
        int mp[26]={0};
        for(auto i:s){
            mp[i-'a']++;
        }
        for(auto i:t){
            mp[i-'a']--;
        }
        for(auto i:mp){
            if(i>0){
                return false;
            }
        }
        return true;
    }
};