/**
 * @param {number[][]} matrix
 * @return {void} Do not return anything, modify matrix in-place instead.
 */
var rotate = function (matrix) {
  const sz = matrix.length;

  // transpose
  for (let i = 0; i < sz; ++i) {
    for (let j = i; j < sz; ++j) {
      [matrix[i][j], matrix[j][i]] = [matrix[j][i], matrix[i][j]];
    }
  }

  // flip
  for (let i = 0; i < sz; ++i) {
    for (let j = 0; j < parseInt(sz / 2); ++j) {
      [matrix[i][j], matrix[i][sz - 1 - j]] = [
        matrix[i][sz - 1 - j],
        matrix[i][j],
      ];
    }
  }
};
