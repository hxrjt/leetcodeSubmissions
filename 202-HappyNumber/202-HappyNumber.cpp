// Last updated: 12/2/2025, 5:52:01 PM
class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> s;
        int ans=0;
        int temp=n;
        while(temp!=1){
            int loop=temp;
            while(loop){
                int div=loop%10;
                ans+=div*div;
                loop/=10;
            }
            temp=ans;
            ans=0;
            if(s.find(temp)!=s.end()){
                return false;
            }
            else{
                s.insert(temp);
            }
        }
        return true;
    }
};