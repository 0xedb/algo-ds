func moveZeroes(nums []int)  {
    anchor := 0
    explorer := 0
    
    for explorer < len(nums) {
        
        if nums[explorer] != 0 {
            
            if explorer != anchor {
                temp := nums[explorer]
                nums[explorer] = nums[anchor]
                nums[anchor] = temp
            }
            
            anchor++
        }
        
        explorer++
    }
}