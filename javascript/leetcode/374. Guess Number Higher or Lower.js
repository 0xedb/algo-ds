/**
 * Forward declaration of guess API.
 * @param {number} num   your guess
 * @return 	            -1 if num is lower than the guess number
 *			             1 if num is higher than the guess number
 *                       otherwise return 0
 * var guess = function(num) {}
 */

/**
 * @param {number} n
 * @return {number}
 */
var guessNumber = function(n) {
  let start = 1;
  let ans = -1;

  while (start <= n) {
    let mid = start + parseInt((n - start) / 2);
    let g = guess(mid);
    if (g === 0) return mid;
    if (g == -1) n = mid - 1;
    else start = mid + 1;
  }

  return ans;
};
