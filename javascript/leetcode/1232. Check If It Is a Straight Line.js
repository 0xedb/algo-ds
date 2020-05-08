/**
 * @param {number[][]} coordinates
 * @return {boolean}
 */
var checkStraightLine = function (coordinates) {
  let x0 = coordinates[0][0];
  let x1 = coordinates[1][0];

  let y0 = coordinates[0][1];
  let y1 = coordinates[1][1];

  for (let i = 2; i < coordinates.length; ++i) {
    const point = coordinates[i];
    if ((x1 - x0) * (point[1] - y1) !== (point[0] - x1) * (y1 - y0))
      return false;
  }

  return true;
};
