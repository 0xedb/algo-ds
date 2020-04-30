/**
 * @param {number[][]} matrix
 * @return {number[]}
 */
var luckyNumbers = function (matrix) {
  const ans = [];

  let k = matrix.length;
  let col = matrix[0].length;
  let row = 0;

  while (row < k) {
    let setcol = 0;
    let _min = matrix[row][0];

    for (let j = 0; j < col; ++j) {
      if (matrix[row][j] < _min) {
        _min = matrix[row][j];
        setcol = j;
      }
    }

    let _max = matrix[0][setcol];
    for (let i = 0; i < k; ++i) {
      if (matrix[i][setcol] > _max) _max = matrix[i][setcol];
    }

    if (_max === _min) ans.push(_max);

    ++row;
  }

  return ans;
};
