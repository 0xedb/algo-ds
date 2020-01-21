func majorityElement(nums []int) int {
    maj := make(map[int]int)
    var mode int
    
    for i := 0; i < len(nums); i++ {
        number := nums[i]
        _, ok := maj[number]
        
        if i == 0 {
            mode = number 
        }
        
        if ok {
            maj[number] += 1
            if(maj[number] > maj[mode]) {
                mode = number
            }
        } else {
            maj[number] = 1
        }
    }    
    
    return mode
}