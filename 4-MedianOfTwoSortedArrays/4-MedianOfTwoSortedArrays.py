# Last updated: 12/2/2025, 5:53:24 PM
import statistics as st
class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        nums3=nums1+nums2
        med=st.median(nums3)
        return med
        