/**
 * @param {number} n
 * @return {number[]}
 */
var sumZero = function (n) {
  const A = new Array(n);

  for (let i = 0; i < n; ++i) A[i] = i * 2 - n + 1;

  return A;
};
