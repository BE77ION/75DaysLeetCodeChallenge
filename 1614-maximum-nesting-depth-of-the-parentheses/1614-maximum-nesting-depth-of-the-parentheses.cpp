class Solution {
public:
    int maxDepth(string s) {
        int maxcount=0;
        int count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(')count++;
            maxcount=max(maxcount,count);
            if(s[i]==')')count--;
        }
        maxcount=max(maxcount,count);
        return maxcount;
    }
};