func findTheDifference(s string, t string) byte {
    sum_s := byte(0)
    sum_t := byte(0)
    
    for i := 0; i < len(s); i++ {
        sum_s += (s[i])
    }
    
    for i := 0; i < len(t); i++ {
        sum_t += t[i]
    }
    
    return sum_t - sum_s
}
