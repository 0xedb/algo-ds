/**
 * @param {string[]} A
 * @return {string[]}
 */
var commonChars = function (A) {
  const seen = new Map();
  const result = [];

  const sz = A.length;

  // fill map
  let pos = 0;
  A.forEach((el) => {
    for (let i of el) {
      if (seen.has(i)) {
        seen.get(i)[pos] += 1;
      } else {
        seen.set(i, new Array(sz));
        seen.get(i).fill(0, 0);
        seen.get(i)[pos] = 1;
      }
    }
    pos++;
  });

  // get common
  seen.forEach((val, key) => {
    if (val.every((v) => v > 0)) {
      let min = Math.min(...val);
      for (; min > 0; --min) result.push(key);
    }
  });

  return result;
};
