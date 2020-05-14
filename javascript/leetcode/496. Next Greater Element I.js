/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number[]}
 */
var nextGreaterElement = function (nums1, nums2) {
  const seen = new Map();
  const stk = [];

  for (let i of nums2) {
    while (stk.length && stk[stk.length - 1] < i) seen.set(stk.pop(), i);

    stk.push(i);
  }

  console.log(seen);

  for (let i = 0; i < nums1.length; ++i)
    nums1[i] = seen.has(nums1[i]) ? seen.get(nums1[i]) : -1;

  return nums1;
};
