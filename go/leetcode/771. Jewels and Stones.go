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


///
import "strings"

func numJewelsInStones(J string, S string) int {
    count := 0
    
    for i := 0; i < len(S); i++ {
        if(strings.Contains(J, string(S[i]))) {count++}
    }
    
    return count
}