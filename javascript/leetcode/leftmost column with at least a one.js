/**
 * // This is the BinaryMatrix's API interface.
 * // You should not implement it, or speculate about its implementation
 * function BinaryMatrix() {
 *     @param {integer} x, y
 *     @return {integer}
 *     this.get = function(x, y) {
 *         ...
 *     };
 *
 *     @return {[integer, integer]}
 *     this.dimensions = function() {
 *         ...
 *     };
 * };
 */

/**
 * @param {BinaryMatrix} binaryMatrix
 * @return {number}
 */
var leftMostColumnWithOne = function (binaryMatrix) {
  const [row, col] = binaryMatrix.dimensions();

  let ans = col;

  for (let i = 0; i < row; ++i) {
    let start = ans === col ? col - 1 : ans;
    let end = 0;

    if (binaryMatrix.get(i, start) === 1) {
      while (start >= end) {
        let mid = end + parseInt((start - end) / 2);
        let val = binaryMatrix.get(i, mid);

        if (start === end && val == 1) {
          ans = start;
          break;
        }

        if (val === 1) start = mid;
        else end = ++mid;
      }
    }
  }

  return ans === col ? -1 : ans;
};
