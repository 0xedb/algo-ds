/**
 * @param {number[]} nums
 * @param {number[]} index
 * @return {number[]}
 */
var createTargetArray = function (nums, index) {
  const result = [];
  let count = 0;

  for (let i of index) {
    result.splice(i, 0, nums[count++]);
  }

  return result;
};
