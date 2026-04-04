class Solution {
public:
    int maxScore(vector<int>& arr, int k) {
        int lsum=0,rsum=0,maxsum=0;
        for(int i=0;i<k;i++){
            lsum=lsum+arr[i];
        }
        maxsum=lsum;
        int rightindex=arr.size()-1;
        for(int i=k-1;i>=0;i--){
            lsum=lsum-arr[i];
            rsum=rsum+arr[rightindex];
            rightindex=rightindex-1;
            maxsum=max(maxsum,rsum+lsum);
        }
        return maxsum;
    }
};