class Solution:
    def intersection(self, nums1: List[int], nums2: List[int]) -> List[int]:
        which = []
        other = []
        ans = []
        d = {}
        if len(nums1) > len(nums2):
            which = nums2
            other = nums1
        else:
            which = nums1
            other = nums2

        for i in range(len(which)):
            d[which[i]] = 0
        for i in range(len(other)):
            if other[i] in d:
                ans.append(other[i])
                del d[other[i]]
        return ans
