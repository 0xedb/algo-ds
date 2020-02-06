func isAnagram(s string, t string) bool { 
    map1 := make(map[int32] int) 
    
    if len(s) != len(t) {
        return false
    }
    
    for _, val := range s { 
        _, ok := map1[val]
        if ok {
            map1[val] = map1[val] + 1
            continue
        }
        map1[val] = 1
    }
    
    for _, val := range t {
        _, ok := map1[val]
        if ok {
            map1[val] = map1[val] - 1
            continue
        }  
        return false
    }
    
    for _, val := range t {
        if map1[val] != 0 {
            return false
        } 
    }
     
    return true
} 