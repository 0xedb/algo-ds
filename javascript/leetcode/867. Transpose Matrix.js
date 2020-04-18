/**
 * @param {number[][]} A
 * @return {number[][]}
 */
var transpose = function (A) {
  const r = A.length;
  const c = A[0].length;

  const ans = new Array(c);

  for (let i = 0; i < c; ++i) {
    ans[i] = [];
    for (let j = 0; j < r; ++j) ans[i][j] = A[j][i];
  }

  return ans;
};
