/**
 * @param {number} n
 * @param {number} m
 * @param {number[][]} indices
 * @return {number}
 */
var oddCells = function (n, m, indices) {
  let odds = 0;

  const rows = [];
  const cols = [];
  rows.fill(n, false);
  cols.fill(m, false);

  indices.forEach((el) => {
    rows[el[0]] = !rows[el[0]];
    cols[el[1]] = !cols[el[1]];
  });

  for (let i = 0; i < n; ++i) {
    for (let j = 0; j < m; ++j) if (rows[i] ^ cols[j]) ++odds;
  }

  return odds;
};
