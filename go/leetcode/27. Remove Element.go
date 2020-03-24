func removeElement(nums []int, val int) int {
    first := 0
    last := len(nums) - 1
    lenn := 0
    
    for first <= last {
        if nums[last] == val {
            nums[last] = val - 1
            last--
            lenn++
        } else {
            if nums[first] == val {
                nums[first] = nums[last]
                first++
                nums[last] = val - 1
                last--
                lenn++
            } else {
                first++
            }
        }
    }
    
    return len(nums) - lenn
}

  