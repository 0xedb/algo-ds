func getRow(rowIndex int) []int {
    first := []int{1}
    second := []int{1, 1}
    
    if rowIndex == 0 {return first}
    if rowIndex == 1 {return second}
    
    for i := 2; i <= rowIndex; i++ {
        start := 0
        third := make([]int, i + 1)
        third[0] = 1
        third[i] = 1
        
        for j := 1; j < i; j++ {
            third[j] = second[start] + second[start + 1]
            start += 1
        }
        
        first = second
        second = third
    }
    
    return second
}

 