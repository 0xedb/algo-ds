func productExceptSelf(nums []int) []int {
    ans := make([]int, len(nums))
    forward := make([]int, len(nums))
    backward := make([]int, len(nums))
    
    // initialize 
    forward[0] = 1
    backward[len(nums) - 1] = 1
    
    // move forward
    for i := 0; i < len(nums) - 1; i++ {
        forward[i + 1] = nums[i] * forward[i]
    }

    
    // move backward
    for i := len(nums) - 1; i > 0; i-- {
        backward[i - 1] = nums[i] * backward[i]
    }    
    

    for i := 0; i < len(nums); i++ {
        ans[i] = forward[i] * backward[i]
    }
    
    return ans
    
}
  