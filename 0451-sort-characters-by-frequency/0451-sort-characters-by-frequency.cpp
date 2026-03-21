class Solution {
public:
    string frequencySort(string s) {
        int freq[128]={0};
        for(auto i:s){
            freq[i]++;
        }
        vector<pair<char,int>>ans;
        for(int i=0;i<128;i++){
            if(freq[i]>0){
                ans.push_back({char(i),freq[i]});
            }
        }
        sort(ans.begin(),ans.end(),[](auto&a,auto&b){
            if(a.second!=b.second){
                return a.second>b.second;
            }
            return a.first<b.first;
        });
        string a;
        for(auto i:ans){
            a.append(i.second,i.first);
        }
        return a;
    }
};