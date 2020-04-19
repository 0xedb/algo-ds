/**
 * @param {number[]} nums
 * @param {number} k
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var rotate = function (nums, k) {
  const reverse = (nums, start, end) => {
    while (start < end) {
      const temp = nums[start];
      nums[start] = nums[end];
      nums[end] = temp;
      ++start;
      --end;
    }
  };

  const sz = nums.length;

  k %= sz;
  reverse(nums, 0, sz - 1);
  reverse(nums, 0, k - 1);
  reverse(nums, k, sz - 1);
};
