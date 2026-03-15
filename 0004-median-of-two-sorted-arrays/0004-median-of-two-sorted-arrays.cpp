class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        int n=n1+n2;
        int idx2=n/2;
        int idx1=idx2-1;
        int i=0;
        int j=0;
        int count=0;
        int ele1=-1;
        int ele2=-2;
        while(i<nums1.size()&&j<nums2.size()){
            if(nums1[i]<nums2[j]){
            if(count==idx1)ele1=nums1[i];
            if(count==idx2)ele2=nums1[i];
            count++;
            i++;
            }
            else{
                if(count==idx1)ele1=nums2[j];
            if(count==idx2)ele2=nums2[j];
            count++;
            j++;
            }
        }
        while(i<nums1.size()){
            if(count==idx1)ele1=nums1[i];
            if(count==idx2)ele2=nums1[i];
            count++;
            i++;
        }
        while(j<nums2.size()){
             if(count==idx1)ele1=nums2[j];
            if(count==idx2)ele2=nums2[j];
            count++;
            j++;
        }
        
        if(n%2==1){
            return ele2;
        }
        return (double)(ele1+ele2)/2;

    }
};