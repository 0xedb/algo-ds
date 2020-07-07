func islandPerimeter(grid [][]int) int {
    perimeter := 0
    
    for i := 0; i < len(grid); i++ {
        for j := 0; j < len(grid[0]); j++ {
            if grid[i][j] != 0 {
                perimeter += 4
                
                if i > 0 {
                    perimeter -= grid[i - 1][j]
                }
                
                if j > 0 {
                    perimeter -= grid[i][j - 1]
                }
                
                if i < len(grid) - 1 {
                    perimeter -= grid[i + 1][j]
                }
                
                if j < len(grid[0]) - 1 {
                    perimeter -= grid[i][j + 1]
                }
                
            }
        }
    }
    
    
    return perimeter    
}
