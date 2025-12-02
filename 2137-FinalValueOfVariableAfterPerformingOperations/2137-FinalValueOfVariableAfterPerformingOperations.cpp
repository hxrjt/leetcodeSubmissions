// Last updated: 12/2/2025, 5:49:12 PM
class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int ans=0;
        for(string s:operations){
            if(s=="++X" || s=="X++"){
                ans+=1;
            }
            else{
                ans-=1;
            }
        }
        return ans;
    }
};