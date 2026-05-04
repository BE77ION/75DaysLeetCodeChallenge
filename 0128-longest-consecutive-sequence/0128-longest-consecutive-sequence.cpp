class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()<1){
            return 0;
        }
        int l=1;
        unordered_set<int>s;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        for(auto i:s){
            if(s.find(i-1)==s.end()){
                int count=1;
                int x=i;
                while(s.find(x+1)!=s.end()){
                    x=x+1;
                    count++;
                }
                l=max(l,count);
            }
        }
        return l;
    }
};