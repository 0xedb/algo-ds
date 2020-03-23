/**
 * @param {number[]} nums
 * @return {number}
 */
var singleNonDuplicate = function(nums) {
  let left = 0;
  let right = nums.length - 1;

  while (left < right) {
    let mid = left + (right - left) / 2;
    let isEven = (right - mid) % 2 == 0;

    if (nums[mid] == nums[mid - 1]) {
      if (isEven) right = mid - 2;
      else left = mid + 1;
    } else if (nums[mid] == nums[mid + 1]) {
      if (isEven) left = mid + 2;
      else right = mid - 1;
    } else return nums[mid];
  }
  return nums[left];
};
