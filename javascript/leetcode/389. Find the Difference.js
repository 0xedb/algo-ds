/**
 * @param {string} s
 * @param {string} t
 * @return {character}
 */
var findTheDifference = function(s, t) {
  let sum_s = 0;
  let sum_t = 0;

  for (let i = 0; i < s.length; i++) {
    sum_s += s.charCodeAt(i);
  }

  for (let i = 0; i < t.length; i++) {
    sum_t += t.charCodeAt(i);
  }

  return String.fromCharCode(sum_t - sum_s);
};
