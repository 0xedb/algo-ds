/**
 * @param {number[]} arr
 * @return {boolean}
 */
var uniqueOccurrences = function(arr) {
  if (arr.length === 1) return arr;

  const map = new Map();

  arr.forEach(el => {
    if (map.has(el)) {
      map.set(el, map.get(el) + 1);
    } else map.set(el, 1);
  });
  return new Set(map.values()).size === map.size;
};
