func singleNonDuplicate(nums []int) int {
    left := 0
    right := len(nums) - 1
    
    for left < right {
        mid := left + (right - left) / 2
        isEven := (right - mid) % 2 == 0
        
        if nums[mid] == nums[mid - 1] {
            if isEven {
                right = mid - 2
            } else {
                left = mid + 1
            }
        }else if nums[mid] == nums[mid + 1] {
            if isEven {
                left = mid + 2
            }  else {
                right = mid - 1
            }
        } else {
            return nums[mid]
        }
        
    }
    
    return nums[left]
    
}  