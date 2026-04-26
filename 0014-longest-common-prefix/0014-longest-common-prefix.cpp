class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res;
        sort(strs.begin(),strs.end());
        string first=strs[0];
        string last=strs[strs.size()-1];

        for(int i=0;i<last.size();i++){
            if(first[i]==last[i]){
                res+=first[i];
            }else{
                break;
            }
        }
        return res;
    }
};