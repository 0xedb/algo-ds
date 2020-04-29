/**
 * @param {number[]} nums
 * @return {number}
 */
var dominantIndex = function (nums) {
  let ans = -1;

  let mx = Math.max(...nums);

  for (let i = 0; i < nums.length; ++i) {
    if (nums[i] !== mx && nums[i] * 2 > mx) return -1;

    if (mx === nums[i]) ans = i;
  }

  return ans;
};
