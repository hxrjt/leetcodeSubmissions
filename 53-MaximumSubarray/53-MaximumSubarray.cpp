// Last updated: 12/2/2025, 5:53:00 PM
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum=INT_MIN;
        int currSum=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>currSum+nums[i]){
                currSum=nums[i];
            }
            else{
                currSum+=nums[i];
            }
            maxSum=max(maxSum,currSum);
        }
        return maxSum;
    }
};