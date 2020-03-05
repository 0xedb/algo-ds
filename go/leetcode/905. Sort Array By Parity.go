func sortArrayByParity(A []int) []int {
    pos := 0
    
    for i := 0; i < len(A); i++ {
        if A[i] % 2 == 0 {
            temp := A[pos]
            A[pos] = A[i]
            A[i] = temp
            pos += 1
        }
    }
    
    return A
}