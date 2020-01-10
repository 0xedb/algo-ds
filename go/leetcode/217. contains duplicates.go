func containsDuplicate(nums []int) bool {
    mp := make(map[int]int) 
    
   for _, val := range nums {
        _, ok := mp[val]
        if ok {
            return true
        }
        mp[val] = val
    }
    
    return false
}