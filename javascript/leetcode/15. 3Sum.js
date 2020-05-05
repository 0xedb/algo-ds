/**
 * @param {number[]} nums
 * @return {number[][]}
 */
var threeSum = function (nums) {
  const ans = [];

  if (nums.length < 3) return ans;

  nums.sort((a, b) => a - b);

  for (let i = 0; i < nums.length - 2; ++i) {
    if (i === 0 || (i > 0 && nums[i] !== nums[i - 1])) {
      let start = i + 1;
      let end = nums.length - 1;
      let sum = -nums[i];

      while (start < end) {
        if (nums[start] + nums[end] === sum) {
          ans.push([nums[i], nums[start], nums[end]]);

          while (start < end && nums[start] === nums[start + 1]) ++start;
          while (start < end && nums[end] === nums[end - 1]) --end;

          --end;
          ++start;
        } else if (nums[start] + nums[end] > sum) --end;
        else ++start;
      }
    }
  }

  return ans;
};
