class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int>ans(n,0);
        stack<int>o;

        for(int i=0;i<n;i++){
            while(!o.empty()&&temperatures[i]>temperatures[o.top()]){
                int index=o.top();
                o.pop();
                ans[index]=i-index;
            }
            o.push(i);
        }
        return ans;
    }
};