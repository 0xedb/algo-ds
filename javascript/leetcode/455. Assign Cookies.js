/**
 * @param {number[]} g
 * @param {number[]} s
 * @return {number}
 */
var findContentChildren = function (g, s) {
  let max = 0;
  g.sort((a, b) => a - b);
  s.sort((a, b) => a - b);

  let i = s.length - 1;
  let j = g.length - 1;

  while (i >= 0 && j >= 0) {
    if (s[i] >= g[j]) {
      max++;
      i--;
      j--;
    } else j--;
  }

  return max;
};
