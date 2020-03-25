/**
 * @param {number[]} nums
 * @return {number}
 */
var findDuplicate = function(nums) {
  let set = new Set();

  for (let i of nums) {
    if (set.has(i)) return i;
    else set.add(i);
  }

  return 1;
};
