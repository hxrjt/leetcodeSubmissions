// Last updated: 12/2/2025, 5:49:19 PM
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(nums.size()*2,0);
        for(int i=0;i<nums.size();i++){
            ans[i]=nums[i];
            ans[i+n]=nums[i];
        }
        return ans;
    }
};