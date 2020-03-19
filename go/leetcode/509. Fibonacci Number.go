func fib(N int) int {
    if N == 0 {return 0}
    if N == 1 {return 1}
    
    first := 0
    second := 1
    
    for i := 2; i <= N; i++ {
        third := first + second
        first = second 
        second = third
    }
    
    return second
}