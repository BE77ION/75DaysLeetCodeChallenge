class Solution {
public:
    int maxProfit(vector<int>& p) {
        int buying=p[0];
        int pro=0;
        for(auto i:p){
            if(buying>i){
                buying =i;
            }
            pro=max(pro,i-buying);
        }
        return pro;
    }
};