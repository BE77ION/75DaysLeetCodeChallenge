class Solution {
public:
    int beautySum(string s) {
        int sum=0;
        for(int i=0;i<s.size();i++){
            vector<int>freq(26,0);
            for(int j=i;j<s.size();j++){
                freq[s[j]-'a']++;
                int maxlen=0;
                int minfreq=INT_MAX;
                for(auto i:freq){
                    if(i>0){
                        maxlen=max(maxlen,i);
                        minfreq=min(minfreq,i);
                    }
                }
                sum+=(maxlen-minfreq);

            }
        }
        return sum;
    }
};