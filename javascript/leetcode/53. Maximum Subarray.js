/**
 * @param {number[]} nums
 * @return {number}
 */
var maxSubArray = function(nums) {
  if (!nums.length) return 0;

  let max = nums[0];
  let sum = max;

  nums.forEach((el, ind) => {
    if (ind !== 0) {
      sum = Math.max(el, el + sum);
      max = max > sum ? max : sum;
    }
  });

  return max;
};
