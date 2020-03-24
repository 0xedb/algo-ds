/**
 * @param {number[]} nums
 * @param {number} val
 * @return {number}
 */
var removeElement = function(nums, val) {
  let first = 0;
  let last = nums.length - 1;
  let len = 0;

  while (first <= last) {
    if (nums[last] === val) {
      nums[last--] = val - 1;
      len++;
    } else {
      if (nums[first] === val) {
        nums[first++] = nums[last];
        nums[last--] = val - 1;
        len++;
      } else first++;
    }
  }

  return nums.length - len;
};
