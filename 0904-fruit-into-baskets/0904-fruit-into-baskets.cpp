class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int maxlen=0;
        int n=fruits.size();
        int left=0;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[fruits[i]]++;
            if(mp.size()>2){
                mp[fruits[left]]--;
                if(mp[fruits[left]]==0){
                    mp.erase(fruits[left]);
                }
                left++;
            }
            maxlen=max(maxlen,i-left+1);
        }
        return maxlen;
    }
};