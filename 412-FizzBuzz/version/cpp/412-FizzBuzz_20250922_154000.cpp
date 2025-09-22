// Last updated: 9/22/2025, 3:40:00 PM
class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int i=0,j=nums.size()-1;
        while(i<=j){
            if(nums[i]==target || nums[j]==target){
                return true;
            }
            i++,j--;
        }
        return false;
    }
};