/**
 * @param {number[]} nums
 * @return {number[]}
 */
var findErrorNums = function (nums) {
  let dupe = -1;
  let missing = 1;

  for (let i of nums) {
    if (nums[Math.abs(i) - 1] < 0) dupe = Math.abs(i);
    else nums[Math.abs(i) - 1] *= -1;
  }

  for (let i = 1; i < nums.length; i++) {
    if (nums[i] > 0) missing = ++i;
  }

  return [dupe, missing];
};
