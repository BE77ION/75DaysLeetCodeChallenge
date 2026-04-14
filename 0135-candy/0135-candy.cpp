class Solution {
public:
    int candy(vector<int>& r) {
        int sum=1;
        int i=1;
        int n=r.size();

        while(i<n){
            if(r[i]==r[i-1]){
                sum+=1;
                i++;
                continue;
            }
            int peak=1;
            while(i<n&&r[i]>r[i-1]){
                peak++;
                sum+=peak;
                i++;
            }
            int down=1;
            while(i<n&&r[i]<r[i-1]){
                sum+=down;
                down++;
                i++;
            }
            if(down>peak){
                sum+=down-peak;
            }
        }
        return sum;
    }
};