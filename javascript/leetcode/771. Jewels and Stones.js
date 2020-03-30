/**
 * @param {string} J
 * @param {string} S
 * @return {number}
 */
var numJewelsInStones = function(J, S) {
  let count = 0;
  let stones = new Set(J);

  for (let w of S) {
    if (stones.has(w)) count++;
  }

  return count;
};
