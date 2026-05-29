class Solution {
public:
    int minElement(vector<int>& nums) {
       
        int digit=INT_MAX;
        int mini=INT_MAX;
        for(int i=0;i<nums.size();i++){
             int sum=0;
        while(nums[i]!=0){
            int digit=nums[i]%10;
            sum=sum+digit;
            nums[i]=nums[i]/10;
        }
        mini=min(mini,sum);
        }

        return mini;
    }
};