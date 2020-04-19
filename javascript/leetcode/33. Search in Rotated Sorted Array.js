/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number}
 */
var search = function (nums, target) {
  let start = 0;
  let end = nums.length - 1;

  while (start <= end) {
    let mid = Math.floor((start + end) / 2);
    let val = nums[mid];

    if (target === val) return mid;

    if (val > nums[end]) {
      target < val && target >= nums[start] ? (end = --mid) : (start = ++mid);
    } else if (val < nums[start]) {
      target > val && target <= nums[end] ? (start = ++mid) : (end = --mid);
    } else {
      target < val ? (end = --mid) : (start = ++mid);
    }
  }

  return -1;
};
