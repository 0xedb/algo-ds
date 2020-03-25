class Solution:
    def findDuplicate(self, nums: List[int]) -> int:
        mp = {}

        for i in nums:
            if i in mp:
                return i
            else:
                mp[i] = 0
        return 1
