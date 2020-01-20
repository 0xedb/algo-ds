/**
 * @param {number[]} nums
 * @return {number[]}
 */
var productExceptSelf = function(nums) {
  const ans = new Array(nums.length);

  // two arrays
  const forward = new Array(nums.length);
  const backward = new Array(nums.length);

  // initialize arrays
  forward[0] = 1;
  backward[nums.length - 1] = 1;

  // go forward
  for (let i = 0; i < nums.length - 1; i++) {
    forward[i + 1] = nums[i] * forward[i];
  }

  // go backward
  for (let i = nums.length - 1; i >= 0; i--) {
    backward[i - 1] = nums[i] * backward[i];
  }

  for (let i = 0; i < nums.length; i++) {
    ans[i] = forward[i] * backward[i];
  }

  return ans;
};
