func findDuplicates(nums []int) []int {
    ans := []int{}
    
    for i := 0; i < len(nums); i++ {
        val := nums[i]
        if val < 0 {
            val *= -1
        }
        
        value := nums[val - 1]
        
        if value < 0 {
            ans = append(ans, val)
        } else {
            nums[val - 1] = -value
        }
    }
    
    return ans
} 