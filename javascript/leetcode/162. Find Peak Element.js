/**
 * @param {number[]} nums
 * @return {number}
 */
var findPeakElement = function (nums) {
  let start = 0,
    end = nums.length - 1;

  while (start < end) {
    let mid = start + parseInt((end - start) / 2);

    if (nums[mid] > nums[mid + 1]) end = mid;
    else start = ++mid;
  }

  return start;
};
