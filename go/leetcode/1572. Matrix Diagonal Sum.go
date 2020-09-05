func diagonalSum(mat [][]int) int {
    total := 0
    
    row := len(mat)
    bound := row - 1
    c := int(row / 2)
    
    // odd
    if row % 2 != 0 {
        total += mat[c][c]
    }
     
    
    for i := 0; i < c; i++ {
        j := bound - i
        
        total += mat[i][i];
        total += mat[i][j];
        
        total += mat[j][i]
        total += mat[j][j]
    }
     
    
    return total
}
