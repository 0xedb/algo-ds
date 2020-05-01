/**
 * @param {number[]} arr
 * @return {void} Do not return anything, modify arr in-place instead.
 */
var duplicateZeros = function (arr) {
  let end = arr.length,
    j = end;

  arr.forEach((el) => {
    if (!el) ++j;
  });

  for (let i = end - 1; i >= 0; --i) {
    if (--j < end) arr[j] = arr[i];

    if (arr[i] === 0 && --j < end) arr[j] = 0;
  }
};
