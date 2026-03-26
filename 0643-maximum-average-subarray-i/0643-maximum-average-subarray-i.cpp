class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        
        double ma=0;
        double sum=0;
        
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        ma=sum;
        for(int i=k;i<nums.size();i++){
            
            sum+=nums[i]-nums[i-k];
            ma=max(ma,sum);
        }
        return ma/k;
    
    }
};