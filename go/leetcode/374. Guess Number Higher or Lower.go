/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * func guess(num int) int;
 */

func guessNumber(n int) int {
    start := 1
    ans := -1
    
    for start <= n {
        mid := start + int((n - start) / 2)
        g := guess(mid)
        
        if g == 0 {return mid}
        if g == -1 {n = mid - 1} else {
            start = mid + 1
        }
    }
    
    
    return ans
}  