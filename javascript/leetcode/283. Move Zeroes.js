/**
 * @param {number[]} nums
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var moveZeroes = function(nums) {
  let anchor = 0;
  let explorer = 0;

  while (explorer < nums.length) {
    if (nums[explorer] !== 0) {
      if (explorer !== anchor) {
        let temp = nums[explorer];
        nums[explorer] = nums[anchor];
        nums[anchor] = temp;
      }

      anchor++;
    }

    explorer++;
  }
};
