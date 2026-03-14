class Solution {
public:
    int maxcapacity(vector<int>& nums) {
        int sum = 0;
        for (auto i : nums) {
            sum += i;
        }
        return sum;
    }
    int possible(vector<int>& nums, int k, int days) {
            int done=1;
            int sum=0;
            for(auto i:nums){
                if(sum+i<=k){
                    sum+=i;
                }
                else{
                    done++;
                    sum=i;
                }
               
            }
            
            if(done<=days){
                return true;
            }
            return false;

        } 
    int shipWithinDays(vector<int> & nums, int days){
         int maxc=maxcapacity(nums);
         int maxele=*max_element(nums.begin(),nums.end());
         int left=maxele;
         int right=maxc;

         while(left<=right){
            int mid=left+(right-left)/2;
            if(possible(nums,mid,days)){
                right=mid-1;

            }else{
                left=mid+1;
            }
         }
         return left;
        } 
    };