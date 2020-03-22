func uniqueOccurrences(arr []int) bool {
    if len(arr) == 1 {return true}
    mp := make(map[int]int)
    mp1 := make(map[int]int)
    
   for _, val := range arr {
        v, ok := mp[val]
        if ok {
            mp[val] = v + 1
        } else {
            mp[val] = 1
        }
    }
    
    
   for _, val := range arr {
        v, ok := mp[val]
        if ok {
            mp1[v] = 0
        }
    } 
    
    return len(mp1) == len(mp)
}