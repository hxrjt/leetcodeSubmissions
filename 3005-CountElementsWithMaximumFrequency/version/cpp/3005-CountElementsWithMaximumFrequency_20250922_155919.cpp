// Last updated: 9/22/2025, 3:59:19 PM
class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> mp;
        int currMax=0;
        int allMax=0;
        int count=0;
        for(int i:nums){
            mp[i]++;
            currMax=mp[i];
            allMax=max(allMax,currMax);
        }
        for(auto i:mp){
            if(i.second==allMax){
                count+=i.second;
            }
        }
        return count;
    }
};