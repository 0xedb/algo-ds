/**
 * @param {number[]} nums
 * @param {number} k
 * @return {boolean}
 */
var kLengthApart = function (nums, k) {
  let last = -1;
  let first = -1;
  const sz = nums.length;

  for (let i = 0; i < sz; ++i) {
    if (nums[i] === 1) {
      if (first < 0) first = i;
      else if (i - last - 1 < k) return false;

      last = i;
    }
  }

  return true;
};
