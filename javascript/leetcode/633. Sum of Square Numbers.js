/**
 * @param {number} c
 * @return {boolean}
 */
var judgeSquareSum = function (c) {
  for (let a = 0; a * a <= c; ++a) {
    let num = c - a * a;
    if (bin_search(0, num, num)) return true;
  }

  return false;
};

function bin_search(start, end, target) {
  if (start > end) return false;

  let mid = start + Math.floor((end - start) / 2);

  if (mid * mid === target) return true;
  if (mid * mid > target) return bin_search(start, --mid, target);
  return bin_search(++mid, end, target);
}
