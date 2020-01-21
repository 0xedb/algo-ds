/**
 * @param {number[]} nums
 * @return {number}
 */
var majorityElement = function(nums) {
  const majMap = new Map();
  let mode;

  nums.forEach(val => {
    if (mode === undefined) {
      mode = val;
    }
    if (majMap.has(val)) {
      const newVal = majMap.get(val) + 1;
      majMap.set(val, newVal);

      if (majMap.get(val) > majMap.get(mode)) mode = val;
    } else majMap.set(val, 1);
  });

  return mode;
};
