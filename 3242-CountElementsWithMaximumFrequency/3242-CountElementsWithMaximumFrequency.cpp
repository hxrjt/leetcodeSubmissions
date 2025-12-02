// Last updated: 12/2/2025, 5:48:50 PM
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