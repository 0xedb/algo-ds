/**
 * @param {string} s
 * @return {boolean}
 */
var isPalindrome = function(s) {
  if (s.length === 0) return true;
  let start = 0;
  let end = s.length - 1;

  const re = /^[a-z0-9]+$/i;

  while (start < end) {
    if (re.test(s[start]) && re.test(s[end])) {
      if (s[start].toLowerCase() == s[end].toLowerCase()) {
        start++;
        end--;
      } else return false;
    }

    if (!re.test(s[start])) start++;
    if (!re.test(s[end])) end--;
  }

  return true;
};
