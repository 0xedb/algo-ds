/**
 * @param {string[]} words
 * @return {string[]}
 */
var findWords = function (words) {
  const first_row = new Set("qwertyuiop");
  const second_row = new Set("asdfghjkl");
  const third_row = new Set("zxcvbnm");

  for (let i = 0; i < words.length; ++i) {
    let which = first_row;
    const first_character = words[i][0].toLowerCase();

    if (second_row.has(first_character)) which = second_row;
    else if (third_row.has(first_character)) which = third_row;

    for (let j = 0; j < words[i].length; ++j) {
      const letter = words[i][j].toLowerCase();

      if (!which.has(letter)) {
        words.splice(i, 1);
        --i;
        break;
      }
    }
  }

  return words;
};
