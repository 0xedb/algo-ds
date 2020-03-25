/** 
 * Forward declaration of isBadVersion API.
 * @param   version   your guess about first bad version
 * @return 	 	      true if current version is bad 
 *			          false if current version is good
 * func isBadVersion(version int) bool;
 */

func firstBadVersion(n int) int {
    start := 0
    
    if n == 1 {return 1}
    for start < n {
        mid := start + int((n - start) / 2)
        bad := isBadVersion(mid)
        
        if bad {
            n = mid
        } else {start = mid + 1}
    }
    
    return start    
}
  