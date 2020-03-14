/**
 * @param {string} s
 * @return {string}
 */
var reverseWords = function(s) {
  let str = "";
  let words = [];

  for (let i = s.length - 1; i >= 0; i--) {
    if (s[i] !== " ") str += s[i];
    else {
      if (str != "") {
        words.unshift(str);
        str = "";
      }
    }
    if (i == 0 && str != "") words.unshift(str);
  }

  str = "";
  for (let i = words.length - 1; i >= 0; i--) {
    str += rev(words[i]);
    if (i !== 0) str += " ";
  }
  return str;
};

function rev(s) {
  let str = "";
  for (let i = s.length - 1; i >= 0; i--) {
    str += s[i];
  }
  return str;
}
