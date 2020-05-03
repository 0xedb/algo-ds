/**
 * @param {string[]} words
 * @param {string} chars
 * @return {number}
 */
var countCharacters = function (words, chars) {
  let len = 0;

  const seen = new Map();

  for (let i of chars) {
    if (seen.has(i)) seen.set(i, seen.get(i) + 1);
    else seen.set(i, 1);
  }

  for (let i of words) {
    const sn = new Map(seen.entries());

    let k = 0;
    for (let j of i) {
      if (sn.has(j)) sn.set(j, sn.get(j) - 1);
      else break;
      if (sn.get(j) < 0) break;
      ++k;
    }

    if (k === i.length) len += i.length;
  }

  return len;
};
