class Solution {
public:
    long long maxtime(long long h, long long n) { return 1LL * n * (h * (h + 1)) / 2; }

    bool possible(vector<int>& nums, long long mid,long long H) {
        long long totalhight=0;
        for(auto i:nums){
            totalhight+=sqrt((2*mid)/i+0.25)-0.5;
            if(totalhight>=H){
                return true;
            }
        }
        return totalhight>=H;
    }
    long long minNumberOfSeconds(int H, vector<int>& workerTimes) {
        long long left = 1;
        int maxworkertime =
            *max_element(workerTimes.begin(), workerTimes.end());
        long long time = maxtime(H, maxworkertime);
        long long right = time;
        long long totalheight = 0;
        while (left <= right) {
            long long mid = left + (right - left) / 2;

            if (possible(workerTimes, mid,H)) {
                right=mid-1;
            }else{
                left=mid+1;
            }
        }
        return left;
    }
};
//tC:log(tmax*(H)^2);