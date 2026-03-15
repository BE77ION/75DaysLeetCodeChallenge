class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>merge;
        int left=0;
        int right=0;
        while(left<nums1.size()&&right<nums2.size()){
            if(nums1[left]<nums2[right]){
                merge.push_back(nums1[left]);
                left++;
            }else{
                merge.push_back(nums2[right]);
                right++;
            }
        }
        while(left<nums1.size()){
            merge.push_back(nums1[left]);
                left++;
        }
        while(right<nums2.size()){
            merge.push_back(nums2[right]);
                right++;
        }
        int n=merge.size();
        
        if(n%2==1){
            return merge[n/2];
        }else{
            double x=merge[n/2]+merge[(n/2)-1];
            return x/2;
        }
        return -1;
    }
};