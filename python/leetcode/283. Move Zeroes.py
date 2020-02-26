class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        anchor = 0
        explorer = 0
        
        while explorer < len(nums):
            
            if nums[explorer] != 0:
                if anchor != explorer:
                    temp = nums[explorer]
                    nums[explorer] = nums[anchor]
                    nums[anchor] = temp
                anchor += 1
            explorer += 1