func rob(nums []int) int {
    if len(nums) == 0 {return 0}
    max := nums[0]
    
    for i := 0; i < len(nums); i++ {
        if i < 2 {
            if nums[i] > max {
                max = nums[i]
            } 
            nums[i] = max
        } else {
            if max <= nums[i] + nums[i - 2] {
                max = nums[i] + nums[i - 2]
            }
            nums[i] = max
        }
    }
    return max
} 
    
 