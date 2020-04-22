/**
 * @param {number} low
 * @param {number} high
 * @return {number[]}
 */
var sequentialDigits = function (low, high) {
  const ans = [];

  const btrack = (ans, l, h, sol, n) => {
    if (sol > h) return;
    if (sol >= l) ans.push(sol);
    if (n > 9) return;

    btrack(ans, l, h, sol * 10 + n, n + 1);
  };

  for (let i = 1; i <= 9; ++i) btrack(ans, low, high, 0, i);

  ans.sort((a, b) => a - b);
  return ans;
};
