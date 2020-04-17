/**
 * @param {number[]} A
 * @return {boolean}
 */
var validMountainArray = function (A) {
  const sz = A.length;
  if (sz < 3) return false;

  let left = 0;

  while (A[left] < A[left + 1]) ++left;
  if (left === sz - 1) return false;

  if (left < 1) return false;

  while (left < sz - 1) {
    if (A[left] <= A[left + 1]) return false;
    ++left;
  }

  return true;
};
