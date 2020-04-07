/**
 * @param {number[]} nums
 * @return {number[]}
 */
var decompressRLElist = function (nums) {
  const result = [];
  for (let i = 0; i < nums.length; i += 2) {
    let freq = nums[i];

    while (freq--) result.push(nums[i + 1]);
  }
  return result;
};
