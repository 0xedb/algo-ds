/**
 * @param {string} pattern
 * @param {string} str
 * @return {boolean}
 */
var wordPattern = function (pattern, str) {
  const words = str.split(" ");

  if (words.length !== pattern.length) return false;

  const seen = new Map();
  const dupe = new Set();

  let i = 0;
  for (let j of pattern) {
    if (seen.has(j)) {
      if (seen.get(j) !== words[i]) return false;
    } else {
      if (dupe.has(words[i])) return false;
      seen.set(j, words[i]);
      dupe.add(words[i]);
    }

    ++i;
  }

  return true;
};
