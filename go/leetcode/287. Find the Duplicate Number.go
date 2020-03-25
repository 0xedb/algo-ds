func findDuplicate(nums []int) int {
    mp := make(map[int]int)
    
    for _, val := range nums { 
        _, ok := mp[val]
        if ok {return val}
        mp[val] = 1;
    }
    
    return 1
}