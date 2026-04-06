class Solution {
public:
    string minWindow(string s, string t) {
         int minlen=INT_MAX;
         int sind=-1;
            int hash[256]={0};int count=0;
            int l=0;
            int r=0;
            for(int j=0;j<t.size();j++){
                hash[t[j]]++;
            }
            while(r<s.size()){
                if(hash[s[r]]>0)count++;
                hash[s[r]]--;
                while(count==t.size()){
                    if(r-l+1<minlen){
                        minlen=r-l+1;
                        sind=l;
                    }
                    hash[s[l]]++;
                    if(hash[s[l]]>0)count--;
                    l++;
                }
                r++;
            }
    return sind == -1?"":s.substr(sind,minlen);
    }
};