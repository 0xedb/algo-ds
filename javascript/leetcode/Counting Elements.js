/**
 * @param {number[]} arr
 * @return {number}
 */
var countElements = function (arr) {
  let count = 0;
  if (arr.length === 1) return count;

  const seen = new Set(arr);

  for (let el of arr) {
    if (seen.has(el + 1)) count++;
  }

  return count;
};
