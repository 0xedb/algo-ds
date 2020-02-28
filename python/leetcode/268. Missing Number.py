class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        max = nums[0]
        map = set()
        
        for i in range(len(nums)):
            if(nums[i] > max):
                max = nums[i]
            map.add(nums[i])
            
        for i in range(max + 1):
            if i not in map:
                return i
        
        return max + 1
        