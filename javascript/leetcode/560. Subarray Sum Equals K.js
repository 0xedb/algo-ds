/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
var subarraySum = function (nums, k) {
  let count = 0;
  let sum = 0;

  const seen = new Map();
  seen.set(0, 1);

  for (let i of nums) {
    sum += i;
    count += seen.has(sum - k) ? seen.get(sum - k) : 0;
    if (seen.has(sum)) seen.set(sum, seen.get(sum) + 1);
    else seen.set(sum, 1);
  }

  return count;
};
