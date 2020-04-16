/**
 * @param {string} s
 * @return {boolean}
 */
var checkValidString = function (s) {
  if (!s.length) return true;

  let min = 0,
    max = 0;

  for (let i of s) {
    min += i === "(" ? 1 : -1;
    max += i === ")" ? -1 : 1;

    if (max < 0) break;
    min = Math.max(min, 0);
  }

  return min === 0;
};
