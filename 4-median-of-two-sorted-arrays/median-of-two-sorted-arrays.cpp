class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int n=nums1.size();
        int m=nums2.size();
        for(int i=0;i<n;i++){
            ans.push_back(nums1[i]);
        }
        for(int i=0;i<m;i++){
            ans.push_back(nums2[i]);
        }
        sort(ans.begin(),ans.end());
        int mid = ans.size()/2;
        if(ans.size()%2==0){
            return (ans[mid - 1] + ans[mid]) / 2.0;
        }
        return ans[mid];
        
    }
};