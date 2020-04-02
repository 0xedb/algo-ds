/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLongestSubstring = function(s) {
  let max = 0;
  let left = 0;
  let right = 0;

  const seen = new Set();

  while (right < s.length) {
    if (seen.has(s[right])) {
      seen.delete(s[left]);
      left++;
    } else {
      seen.add(s[right]);
      max = seen.size > max ? seen.size : max;
      right++;
    }
  }

  return max;
};
