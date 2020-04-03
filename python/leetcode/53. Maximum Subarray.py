class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        if len(nums) == 0:
            return 0
        max = nums[0]
        sum = max

        for i in range(1, len(nums)):
            sum = nums[i] if nums[i] + sum < nums[i] else nums[i] + sum
            max = max if max > sum else sum
        return max
