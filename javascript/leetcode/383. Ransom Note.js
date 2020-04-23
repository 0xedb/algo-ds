/**
 * @param {string} ransomNote
 * @param {string} magazine
 * @return {boolean}
 */
var canConstruct = function (ransomNote, magazine) {
  if (ransomNote.length > magazine.length) return false;

  const seen = new Map();

  for (let i of magazine)
    seen.has(i) ? seen.set(i, seen.get(i) + 1) : seen.set(i, 1);

  for (let j of ransomNote) {
    if (!seen.has(j) || (seen.has(j) && seen.get(j) == 0)) return false;

    seen.set(j, seen.get(j) - 1);
  }

  return true;
};
