/**
 * @param {number[]} nums
 * @return {number}
 */
var findMin = function (nums) {
  if (!nums.length) return -1;

  let start = 0;
  let end = nums.length - 1;

  while (start < end) {
    if (nums[start] < nums[end]) break;

    let mid = start + parseInt((end - start) / 2);

    if (nums[start] <= nums[mid]) start = ++mid;
    else end = mid;
  }

  return nums[start];
};
