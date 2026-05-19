class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int i=0;
        int j=0;
        int n=nums1.size();
        int m=nums2.size();
        int mini1=nums1[0];
        int mini2=nums2[0];
        while(i<n && j<m ){
            // mini1=min(mini1,nums1[i]);
            // mini2=min(mini2,nums2[i]);
            if(nums1[i]==nums2[j]){
                return nums1[i];
            }
            else if(nums1[i]<nums2[j]){
                i++;
            }
            else{
                j++;
            }
        }   
        return -1;
    }
};