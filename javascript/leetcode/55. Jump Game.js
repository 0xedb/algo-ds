/**
 * @param {number[]} nums
 * @return {boolean}
 */
var canJump = function (nums) {
  const sz = nums.length;
  let last = sz - 1;

  for (let i = last; i >= 0; --i) {
    if (i + nums[i] >= last) last = i;
  }

  return last == 0;
};
