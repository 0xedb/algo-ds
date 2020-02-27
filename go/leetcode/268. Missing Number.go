func missingNumber(nums []int) int {
    max := nums[0]
    mp := make(map[int]int)
    
    for i := 0; i < len(nums); i++ {
        mp[nums[i]] = i
        if nums[i] > max {
            max = nums[i]
        }
    }
    
    for i := 0; i <= max; i++ {
        _, ok := mp[i]
        if !ok {
            return i
        }
    }
    
    return max + 1
}