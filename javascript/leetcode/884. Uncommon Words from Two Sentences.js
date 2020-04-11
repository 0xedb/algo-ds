/**
 * @param {string} A
 * @param {string} B
 * @return {string[]}
 */
var uncommonFromSentences = function (A, B) {
  const seen = new Map();

  A.concat(" ", B)
    .split(" ")
    .forEach((i) => {
      if (seen.has(i)) seen.set(i, seen.get(i) + 1);
      else seen.set(i, 1);
    });

  return Array.from(seen.keys()).filter((el) => seen.get(el) === 1);
};
