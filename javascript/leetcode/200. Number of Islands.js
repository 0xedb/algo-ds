/**
 * @param {character[][]} grid
 * @return {number}
 */
var numIslands = function (grid) {
  if (!grid.length) return 0;
  let islands = 0;

  grid.forEach((el, ind) => {
    grid[ind].forEach((val, i) => {
      if (val === "1") islands += full_island(grid, ind, i);
    });
  });

  return islands;
};

function full_island(grid, i, j) {
  if (
    i < 0 ||
    i >= grid.length ||
    j < 0 ||
    j >= grid[i].length ||
    grid[i][j] === "0"
  )
    return 0;
  grid[i][j] = "0";

  full_island(grid, i - 1, j);
  full_island(grid, i + 1, j);
  full_island(grid, i, j - 1);
  full_island(grid, i, j + 1);

  return 1;
}
