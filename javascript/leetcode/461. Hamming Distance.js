/**
 * @param {number} x
 * @param {number} y
 * @return {number}
 */
var hammingDistance = function (x, y) {
  let ans = 0;
  let _xor = x ^ y;

  while (_xor) {
    ans += _xor & (1 == 1) ? 1 : 0;
    _xor >>>= 1;
  }

  return ans;
};
