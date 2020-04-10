/**
 * @param {number[]} nums
 * @return {number}
 */
var firstMissingPositive = function (nums) {
  if (!nums.length) return 1;

  const seen = new Set();
  let min = 1;

  nums.forEach((el) => (el > 0 ? seen.add(el) : null));
  seen.forEach((el) => (seen.has(min) ? min++ : null));

  return min;
};
