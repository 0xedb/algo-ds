/**
 * @param {string} str
 * @return {string}
 */
var toLowerCase = function(str) {
  let ans = "";

  for (let i of str) {
    ans += i.toLowerCase();
  }

  return ans;
};
