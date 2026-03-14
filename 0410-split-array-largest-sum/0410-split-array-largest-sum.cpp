class Solution {
public:
bool possible(vector<int>& nums, int k,int m){
    int sum=0;
    int split=1;
    for(int i=0;i<nums.size();i++){
        if(sum+nums[i]<=m){
            sum+=nums[i];
        }else{
            sum=nums[i];
            split++;
        }
    }
    return split<=k;
}
    int splitArray(vector<int>& nums, int k) {
        int maxe=*max_element(nums.begin(),nums.end());
        int maxc=accumulate(nums.begin(),nums.end(),0);
        int left=maxe;
        int right=maxc;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(possible(nums,k,mid)){
                right=mid-1;
            }else{
               left=mid+1;
            }
        }
        return left;
    }
};