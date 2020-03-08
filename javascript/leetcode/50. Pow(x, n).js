/**
 * @param {number} x
 * @param {number} n
 * @return {number}
 */
var myPow = function(x, n) {
  if (n === 0) return 1;

  let partial = myPow(x, Number.parseInt(n / 2));

  if (n % 2 === 0) return partial * partial;
  else {
    if (n < 0) return (partial * partial) / x;
    return x * partial * partial;
  }
};
