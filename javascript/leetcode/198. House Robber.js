/**
 * @param {number[]} nums
 * @return {number}
 */
var rob = function(nums) {
  if (nums.length === 0) return 0;
  let max = nums[0];

  for (let i = 0; i < nums.length; i++) {
    if (i < 2) {
      max = max > nums[i] ? max : nums[i];
      nums[i] = max;
    } else {
      max = max >= nums[i] + nums[i - 2] ? max : nums[i] + nums[i - 2];
      nums[i] = max;
    }
  }

  return max;
};
