// Last updated: 12/2/2025, 5:53:21 PM
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums3;
        int i=0,j=0;
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]<=nums2[j]){
                nums3.push_back(nums1[i]);
                i++;
            }
            else{
                nums3.push_back(nums2[j]);
                j++;
            }
        }
        while(i<nums1.size()){
            nums3.push_back(nums1[i]);
            i++;
        }
        while(j<nums2.size()){
            nums3.push_back(nums2[j]);
            j++;
        }
       i=0,j=nums3.size()-1;
       int mid=i+(j-i)/2;
       double ans=0;
       if(nums3.size()%2==0){
        ans=(nums3[mid]+nums3[mid+1])/2.0;
       }
       else{
        ans=nums3[mid];
       }
       return ans;

    }
};