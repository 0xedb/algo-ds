/**
 * @param {number[]} nums
 * @return {number[]}
 */
var findDisappearedNumbers = function (nums) {
  const result = [];

  nums.forEach((el, pos) => {
    let ind = Math.abs(el) - 1;
    if (nums[ind] > 0) nums[ind] *= -1;
  });

  nums.forEach((el, pos) => {
    if (el > 0) result.push(pos + 1);
  });

  return result;
};
