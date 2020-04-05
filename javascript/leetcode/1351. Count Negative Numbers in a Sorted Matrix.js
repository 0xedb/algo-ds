/**
 * @param {number[][]} grid
 * @return {number}
 */
var countNegatives = function (grid) {
  let found = 0;

  for (let i of grid) {
    const pos = i.length - 1;
    for (let j = pos; j >= 0; j--) {
      if (i[j] >= 0) break;
      found++;
    }
  }

  return found;
};

// could use binary search to optimize inner loop
