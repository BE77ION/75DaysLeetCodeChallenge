class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l=0;
        int x=0;
        int r=nums.size()-1;

        while(x<=r){
            if(nums[x]==0){
                swap(nums[x],nums[l]);
                l++;
                x++;
            }else if(nums[x]==2){
                swap(nums[x],nums[r]);
                r--;
            }else{
            
                x++;
            }
        }
    }
};