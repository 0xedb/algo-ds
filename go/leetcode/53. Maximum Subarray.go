func maxSubArray(nums []int) int {
    if len(nums) < 1 {return 0}
    
    max := nums[0]
    sum := max
    
    for i := 1; i < len(nums); i++ {
        if nums[i] > nums[i] + sum {
            sum = nums[i]
        } else {sum = nums[i] + sum}
        if max < sum {
            max = sum
        }
    }
    
    return max
    
} 