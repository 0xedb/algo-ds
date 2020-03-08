func myPow(x float64, n int) float64 {
    if n == 0 {return 1}
    
    partial := myPow(x, int(n / 2))
    
    if n % 2 == 0 { return partial * partial}
    if n < 0 { return (partial * partial) / x}
    return x * partial * partial 
}
 