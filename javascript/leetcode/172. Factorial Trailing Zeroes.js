/**
 * @param {number} n
 * @return {number}
 */
var trailingZeroes = function (n) {
  let fives = 0;

  while (n >= 5) {
    n = parseInt(n / 5);
    fives += n;
  }

  return fives;
};
