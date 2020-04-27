/**
 * @param {number} num
 * @return {boolean}
 */
var isPerfectSquare = function (num) {
  let start = 1;
  let end = num;

  while (start <= end) {
    let mid = start + parseInt((end - start) / 2);
    const sqr = mid * mid;

    if (sqr == num) return true;
    if (sqr > num) end = --mid;
    else start = ++mid;
  }

  return false;
};
