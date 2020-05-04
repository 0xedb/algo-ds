/**
 * @param {number[]} nums
 * @return {number}
 */
var maximumProduct = function (nums) {
  nums = nums.sort((a, b) => a - b);
  console.log(nums);
  const sz = nums.length;

  const first = nums[0] * nums[1] * nums[sz - 1];
  const second = nums[sz - 3] * nums[sz - 2] * nums[sz - 1];

  return Math.max(first, second);
};
