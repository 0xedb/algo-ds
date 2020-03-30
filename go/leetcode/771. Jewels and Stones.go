func numJewelsInStones(J string, S string) int {
    count:=0
    for _, val := range S {
        for _, val1 := range J { 
            if val == val1 {
                count++
            }
        }
    }
    return count
}