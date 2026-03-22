class Solution {
public:
    int myAtoi(string s) {
        string ans;
        int left = 0;
        int sign = 1;
        long long res=0;
        while(left < s.size()&&s[left] == ' ') {
            left++;
        }
        if (left<s.size()&&(s[left] == '-'||s[left]=='+')) {
            if(s[left]=='-'){sign = -1;}
            left++;
        }
     while (left<s.size()&&isdigit(s[left])) {
            res=res*10+(s[left]-'0');
            if(res*sign>INT_MAX)return INT_MAX;
            if(res*sign<INT_MIN)return INT_MIN;
            left++;
            }
        return sign*res;
    }
};