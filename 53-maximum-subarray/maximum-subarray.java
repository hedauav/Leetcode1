class Solution {
    public int maxSubArray(int[] nums) {
        int currsum=nums[0];
        int maxisum=nums[0];

        for(int i=1;i<nums.length;i++){

            currsum = Math.max(nums[i],nums[i]+currsum);
            maxisum = Math.max(currsum,maxisum);
        }

        return maxisum;
    }
}