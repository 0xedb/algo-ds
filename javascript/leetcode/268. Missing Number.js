/**
 * @param {number[]} nums
 * @return {number}
 */
var missingNumber = function(nums) {
  let pos = 0;
  let max = nums[pos];
  const set = new Set();

  while (pos < nums.length) {
    if (nums[pos] > max) max = nums[pos];
    set.add(nums[pos]);
    pos++;
  }

  for (let i = 0; i <= max; i++) {
    if (!set.has(i)) return i;
  }

  return max + 1;
};
