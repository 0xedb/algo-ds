class Solution:
    def singleNonDuplicate(self, nums: List[int]) -> int:
        left = 0
        right = len(nums) - 1

        while left < right:
            mid = int(left + (right - left) / 2)
            isEven = (right - mid) % 2 == 0
            if nums[mid] == nums[mid - 1]:
                if isEven:
                    right = mid - 2
                else:
                    left = mid + 1
            elif nums[mid] == nums[mid + 1]:
                if isEven:
                    left = mid + 2
                else:
                    right = mid - 1
            else:
                return nums[mid]

        return nums[left]
