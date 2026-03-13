class Solution {
public:
    bool possible(vector<int>& nums, int t,int num){
        int sum=0;
        for(auto i:nums){
            sum+=ceil((double)i/(double)num);
        }
        if(sum<=t){
            return true;
        }
        return false;
    }
    int smallestDivisor(vector<int>& nums, int t) {
        int maxi=*max_element(nums.begin(),nums.end());
        int left=1;
        int right=maxi;

        while(left<=right){
            int mid=left+(right-left)/2;
            if(possible(nums,t,mid)){
                right=mid-1;
            }else{
                left=mid+1;
            }
        }
        return left;
    }
};