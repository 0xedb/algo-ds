/**
 * @param {number[]} A
 * @return {number[]}
 */
var sortArrayByParity = function(A) {
  let even = 0;
  let pos = 0;

  for (; even < A.length; even++) {
    if (A[even] % 2 === 0) {
      let temp = A[pos];
      A[pos] = A[even];
      A[even] = temp;
      pos++;
    }
  }

  return A;
};
