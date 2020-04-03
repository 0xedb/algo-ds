/**
 * @param {number[]} arr
 * @return {number}
 */
var findLucky = function(arr) {
  const map = new Map();

  arr.forEach(el => {
    if (map.has(el)) map.set(el, map.get(el) + 1);
    else map.set(el, 1);
  });

  const list = [];
  Array.from(map.keys()).forEach(key => {
    if (map.get(key) === key) list.push(key);
  });

  return !list.length ? -1 : Math.max(...list);
};
