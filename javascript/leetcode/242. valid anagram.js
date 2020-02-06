/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isAnagram = function(s, t) {
  if (s.length !== t.length) return false;

  const mp = new Map();
  for (let val of s) {
    if (mp.has(val)) {
      mp.set(val, mp.get(val) + 1);
      continue;
    }
    mp.set(val, 1);
  }

  for (let val of t) {
    if (mp.has(val)) {
      mp.set(val, mp.get(val) - 1);
      continue;
    }
    return false;
  }

  for (let val of t) {
    if (mp.get(val) !== 0) return false;
  }

  return true;
};
