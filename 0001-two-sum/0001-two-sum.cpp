class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>answer;
        
        for(int i=0;i<nums.size();i++){
            int reminder=target-nums[i];
            if(answer.count(reminder)){
                return{answer[reminder],i};
            }
            answer[nums[i]]=i;
        }
        return {};
    }
};