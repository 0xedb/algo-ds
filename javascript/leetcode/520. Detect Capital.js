/**
 * @param {string} word
 * @return {boolean}
 */
var detectCapitalUse = function (word) {
  let count = 0;

  for (let ch of word) {
    if (ch == ch.toUpperCase()) ++count;
  }

  return (
    count === word.length ||
    count === 0 ||
    (count === 1 && word[0] === word[0].toUpperCase())
  );
};
