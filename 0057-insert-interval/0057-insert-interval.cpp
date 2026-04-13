class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& interval, vector<int>& newInterval) {
        vector<vector<int>>ans;
        int n=interval.size();
        int j=0;
        for(int i=0;i<interval.size();i++){
            if(interval[i][1]<newInterval[0]){
                ans.push_back(interval[i]);
                j++;
            }else{
                break;
            }
           
        }
        for(int i=j;i<interval.size();i++){
            if(interval[i][0]<=newInterval[1]){
                newInterval[0]=min(newInterval[0],interval[i][0]);
                newInterval[1]=max(newInterval[1],interval[i][1]);
                j++;
            }else{
                break;
            }
            
        }
         ans.push_back(newInterval);
         for(int i=j;i<n;i++){
             ans.push_back(interval[i]);
         }
         return ans;
    }
};