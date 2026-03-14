class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int maxelement=*max_element(arr.begin(),arr.end());
        vector<int>ans;
    
        for(int i=1;i<=maxelement+k;i++){
            bool missing=true;
            for(int j=0;j<arr.size();j++){
                if(i==arr[j]){
                    missing=false;
                    break;
                }      
            }
            if(missing){
                ans.push_back(i);
            }
        }
        return ans[k-1];

    }
};