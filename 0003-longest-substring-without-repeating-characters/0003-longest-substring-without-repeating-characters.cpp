class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>t;
        int left=0;
        int x=0;

        for(int i=0;i<s.size();i++){
            while(t.count(s[i])){
                t.erase(s[left]);
                left++;
            }
            t.insert(s[i]);
            x=max(x,i-left+1);

        }
        return x;
    }
};