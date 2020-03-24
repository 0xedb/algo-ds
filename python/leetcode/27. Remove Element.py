class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        first = 0
        last = len(nums) - 1
        lenn = 0

        while first <= last:
            if nums[last] == val:
                nums[last] = val - 1
                last -= 1
                lenn += 1
            else:
                if nums[first] == val:
                    nums[first] = nums[last]
                    first += 1
                    nums[last] = val - 1
                    last -= 1
                    lenn += 1
                else:
                    first += 1
        return len(nums) - lenn
