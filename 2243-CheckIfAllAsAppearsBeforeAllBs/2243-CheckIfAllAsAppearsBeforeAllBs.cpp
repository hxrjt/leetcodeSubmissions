// Last updated: 12/2/2025, 5:49:06 PM
class Solution {
public:
    bool checkString(string s) {
        if(s.size()==0 || s.size()==1) return true;
        bool ans=false;
        int i=0;
        for(char c:s){
            if(i==s.size()-1 && !ans){
                return true;
            }
            if(c=='b'){
                ans=true;
            }
            else if(c=='a' && ans){
                ans=false;
                break;
            }
            i++;
        }
        return ans;
    }
};