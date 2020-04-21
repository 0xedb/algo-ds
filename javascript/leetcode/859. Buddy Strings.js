/**
 * @param {string} A
 * @param {string} B
 * @return {boolean}
 */
var buddyStrings = function (A, B) {
  if (A.length != B.length) return false;

  if (A === B) {
    const seen = new Set();

    for (let i of A) seen.add(i);

    if (seen.size < A.length) return true;
    return false;
  }

  const diff = [];
  for (let i = 0; i < A.length; ++i) {
    if (A[i] !== B[i]) {
      diff.push(i);
      if (diff.length > 2) break;
    }
  }

  if (
    diff.length === 2 &&
    A[diff[0]] === B[diff[1]] &&
    B[diff[0]] === A[diff[1]]
  )
    return true;

  return false;
};
