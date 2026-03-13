class Solution {
public:
    bool check(vector<int>&nums,int mid,int m,int k){
        int count=0;
        int buky=0;
        for(auto i:nums){
            if(i<=mid){
                count++;
            }else{
                buky+=count/k;
                count=0;
            }
        }
        buky+=count/k;
        if(buky>=m)return true;
        return false;
    }
    int minDays(vector<int>& b, int m, int k) {
        int maxi=*max_element(b.begin(),b.end());
        int mini=*min_element(b.begin(),b.end());
        int left=mini;
        int right=maxi;
        int n=b.size();
        if((long long)m*(long long)k>n){
            return -1;
        }
        while(left<=right){
            int mid=left+(right-left)/2;
            if(check(b,mid,m,k)){
                right=mid-1;
            }else{
                left=mid+1;
            }
        }
        return left;
    }
};