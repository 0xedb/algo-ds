/**
 * @param {string} s
 * @return {number}
 */
var titleToNumber = function (s) {
  let ans = 0;

  for (let c of s)
    ans =
      ans * 26 +
      String.fromCharCode(c.charCodeAt(0) - "A".charCodeAt(0) + 1).charCodeAt(
        0
      );

  return ans;
};
