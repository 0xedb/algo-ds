class Solution:
    def rob(self, nums: List[int]) -> int:
        if len(nums) == 0:
            return 0

        max = nums[0]

        for i in range(len(nums)):
            if i < 2:
                if nums[i] > max:
                    max = nums[i]
                nums[i] = max
            else:
                if max <= nums[i] + nums[i - 2]:
                    max = nums[i] + nums[i - 2]
                nums[i] = max
        return max
