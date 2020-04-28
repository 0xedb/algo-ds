/**
 * @param {number[]} nums
 * @return {number[]}
 */
var smallerNumbersThanCurrent = function (nums) {
  // duplicate the num array
  // sort it
  // find the counts than each item in sorted
  // save item and counts in map
  // iterate over original array and set value to counts using map
  const dupe = [...nums];
  dupe.sort((a, b) => a - b);

  const seen = new Map();
  let last = dupe[0];

  seen.set(dupe[0], 0);
  dupe[0] = 0;

  for (let i = 1; i < dupe.length; ++i) {
    if (dupe[i] === last) dupe[i] = dupe[i - 1];
    else {
      last = dupe[i];
      dupe[i] = i;
      seen.set(last, i);
    }
  }

  nums.forEach((el, ind) => {
    nums[ind] = seen.get(el);
  });

  return nums;
};
