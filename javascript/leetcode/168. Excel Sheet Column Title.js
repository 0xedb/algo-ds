/**
 * @param {number} n
 * @return {string}
 */
var convertToTitle = function (n) {
  let ans = "";

  while (n) {
    ans = String.fromCharCode((--n % 26) + "A".charCodeAt(0)) + ans;
    n = parseInt(n / 26);
  }

  return ans;
};
