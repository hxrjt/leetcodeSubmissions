// Last updated: 10/21/2025, 8:13:28 PM
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