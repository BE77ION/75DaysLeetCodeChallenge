class Solution {
public:
    string removeOuterParentheses(string s) {
        int start=0;
        int count=0;
        string res;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(')count++;
            else count--;
            if(count==0){
                res+=s.substr(start+1,i-start-1);
                start=i+1;
            }
        }
        return res;
    }
};