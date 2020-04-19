/**
 * @param {number} x
 * @return {number}
 */
var mySqrt = function (x) {
  let end = x;
  let start = 0;

  while (start <= end) {
    let mid = start + Math.floor((end - start) / 2);
    const sqr = Math.pow(mid, 2);

    if (x === sqr) return mid;

    if (sqr < x) start = ++mid;
    else end = --mid;
  }

  return end;
};
