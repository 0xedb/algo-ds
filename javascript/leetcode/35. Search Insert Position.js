/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number}
 */
var searchInsert = function(nums, target) {
  let start = 0;
  let end = nums.length - 1;

  while (start <= end) {
    let mid = start + parseInt((end - start) / 2);
    if (nums[mid] === target) return mid;
    else if (nums[mid] > target) end = mid - 1;
    else start = mid + 1;
  }
  return start;
};
