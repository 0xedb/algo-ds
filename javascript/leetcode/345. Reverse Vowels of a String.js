/**
 * @param {string} s
 * @return {string}
 */
var reverseVowels = function(s) {
  s = s.split("");
  let set = new Set(["a", "A", "e", "E", "i", "I", "o", "O", "u", "U"]);
  let start = 0;
  let end = s.length - 1;

  while (start < end) {
    if (set.has(s[start]) && set.has(s[end])) {
      let temp = s[start];
      s[start] = s[end];
      s[end] = temp;
      end--;
      start++;
      continue;
    }

    if (!set.has(s[end])) {
      end--;
    }
    if (!set.has(s[start])) {
      start++;
    }
  }

  return s.join("");
};
