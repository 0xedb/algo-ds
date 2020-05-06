/**
 * @param {number[][]} intervals
 * @return {number[][]}
 */
var merge = function (intervals) {
  const ans = [];

  intervals = intervals.sort((a, b) => a[0] - b[0]);

  intervals.forEach((el) => {
    if (!ans.length || ans[ans.length - 1][1] < el[0]) ans.push(el);
    else ans[ans.length - 1][1] = Math.max(ans[ans.length - 1][1], el[1]);
  });

  return ans;
};
