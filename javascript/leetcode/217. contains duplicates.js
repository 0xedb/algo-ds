/**
 * @param {number[]} nums
 * @return {boolean}
 */
var containsDuplicate = function(nums) {
  const dupe = new Map();
  let verdict;

  nums.forEach(a => {
    if (dupe.has(a)) {
      verdict = true;
    }
    dupe.set(a, null);
  });

  return verdict ? true : false;
};
