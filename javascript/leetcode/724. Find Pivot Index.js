/**
 * @param {number[]} nums
 * @return {number}
 */
var pivotIndex = function (nums) {
  const sz = nums.length;
  let total = 0,
    sum_left = 0;

  nums.forEach((el) => {
    total += el;
  });

  nums.forEach((el, ind) => {
    if (sum_left === total - el - sum_left) ans = -1;
  });

  for (let i = 0; i < sz; ++i) {
    if (sum_left === total - nums[i] - sum_left) return i;
    sum_left += nums[i];
  }

  return -1;
};
