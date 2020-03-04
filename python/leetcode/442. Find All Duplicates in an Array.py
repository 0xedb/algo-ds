class Solution:
    def findDuplicates(self, nums: List[int]) -> List[int]:
        ans = []
        for i in range(len(nums)):
            val = nums[i]
            if val < 0:
                val *= -1

            value = nums[val - 1]

            if value < 0:
                ans.append(val)
            else:
                nums[val - 1] = -value
        return ans
