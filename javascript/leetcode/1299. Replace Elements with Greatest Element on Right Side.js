/**
 * @param {number[]} arr
 * @return {number[]}
 */
var replaceElements = function (arr) {
  const sz = arr.length - 1;

  let max = arr[sz];

  for (let i = sz - 1; i >= 0; --i) {
    let val = arr[i];
    arr[i] = max;
    max = Math.max(val, max);
  }
  arr[sz] = -1;
  return arr;
};
