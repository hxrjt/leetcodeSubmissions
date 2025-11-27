// Last updated: 11/28/2025, 12:36:07 AM
1class Solution {
2public:
3    vector<int> getConcatenation(vector<int>& nums) {
4        int n=nums.size();
5        vector<int> ans(nums.size()*2,0);
6        for(int i=0;i<nums.size();i++){
7            ans[i]=nums[i];
8            ans[i+n]=nums[i];
9        }
10        return ans;
11    }
12};