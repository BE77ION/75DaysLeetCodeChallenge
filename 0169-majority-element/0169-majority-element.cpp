class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int e=0;
        int c=0;
        for(auto i:nums){
            if(c==0){
                e=i;
                c=1;
            }
            else if(i==e){
                c++;
            }else{
                c--;
            }
        }
        return e;
    }
};