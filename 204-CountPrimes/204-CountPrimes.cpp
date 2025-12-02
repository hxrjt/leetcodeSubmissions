// Last updated: 12/2/2025, 5:51:59 PM
class Solution {
public:
    int countPrimes(int n) {
        vector<bool> prime(n,true);
        for(int i=2;i*i<n;i++){
            if(prime[i]){
                for(int j=i*i;j<n;j+=i){
                    prime[j]=false;
                }
            }
        }
        int count=0;
        for(int i=2;i<n;i++){
            if(prime[i]){
                count++;
            }
        }
        return count;
    }
};