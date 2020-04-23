/**
 * @param {number} n
 * @return {boolean}
 */
var isPowerOfTwo = function (n) {
  if (n > 0) {
    while (n % 2 == 0 && n > 2) n >>= 1;
  }

  return n == 1 || n == 2;
};
