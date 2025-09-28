// Last updated: 9/28/2025, 3:15:59 PM
class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int maxPerimeter=0;
        for(int i=2;i<nums.size();i++){
            if(nums[i]<nums[i-1]+nums[i-2]){
                int currPerimeter=nums[i]+nums[i-1]+nums[i-2];
                maxPerimeter=max(maxPerimeter,currPerimeter);
            }
        }
        return maxPerimeter;
    }
};