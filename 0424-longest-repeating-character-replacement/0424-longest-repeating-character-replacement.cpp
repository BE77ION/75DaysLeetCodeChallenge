class Solution {
public:
    int characterReplacement(string s, int k) {
        int maxlen=0;
        int n=s.size();
        unordered_map<char,int>hash;int maxfreq=0;
        int l=0;
        int r=0;
        
        while(r<n){
            hash[s[r]]++;
            maxfreq=max(maxfreq,hash[s[r]]);
            while((r-l+1)-maxfreq>k){
                hash[s[l]]--;
                
                l++;
            }
            if((r-l+1)-maxfreq<=k){
                maxlen=max(maxlen,r-l+1);
            }
            r++;
        }
        return maxlen;
    }
};