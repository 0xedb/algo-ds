/**
 * @param {string} s
 * @return {string}
 */
var frequencySort = function (s) {
  let ans = "";
  let seen = new Map();

  for (let i of s) seen.has(i) ? seen.set(i, seen.get(i) + 1) : seen.set(i, 1);

  const pq = Array.from(seen.entries());

  pq.sort((a, b) => b[1] - a[1]);

  pq.forEach((el) => {
    let times = el[1];
    while (times--) ans += el[0];
  });

  return ans;
};
