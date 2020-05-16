/**
 * @param {number[]} A
 * @return {number}
 */
var peakIndexInMountainArray = function (A) {
  const ans = 0;

  for (let i = A.length - 2; i >= 0; --i) if (A[i] < A[i + 1]) return ++i;

  return ans;
};
