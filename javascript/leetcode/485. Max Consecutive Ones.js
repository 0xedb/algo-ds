/**
 * @param {number[]} nums
 * @return {number}
 */
var findMaxConsecutiveOnes = function (nums) {
  let cons = 0;
  let count = 0;

  nums.forEach((el) => {
    if (el === 1) {
      ++count;
      cons = cons > count ? cons : count;
    } else count = 0;
  });

  return cons;
};
