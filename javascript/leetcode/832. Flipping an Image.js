/**
 * @param {number[][]} A
 * @return {number[][]}
 */
var flipAndInvertImage = function (A) {
  A.forEach((el, ind) => {
    let start = 0;
    let end = el.length - 1;

    while (start <= end) {
      A[ind][start] = A[ind][start] === 1 ? 0 : 1;
      if (start === end) break;

      A[ind][end] = A[ind][end] === 1 ? 0 : 1;

      const temp = A[ind][start];
      A[ind][start++] = A[ind][end];
      A[ind][end--] = temp;
    }
  });

  return A;
};
