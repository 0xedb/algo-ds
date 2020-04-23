/**
 * @param {string[]} strs
 * @return {string}
 */
var longestCommonPrefix = function (strs) {
  if (strs.lenth == 1) return strs[0];

  let prefix = "";

  if (strs.length < 1) return prefix;

  for (let i = 0; i < strs.length; ++i) {
    if (strs[i].length < strs[0].length) {
      let temp = strs[0];
      strs[0] = strs[i];
      strs[i] = temp;
    }
  }

  for (let i = 0; i < strs[0].length; ++i) {
    for (let j = 1; j < strs.length; ++j) {
      if (strs[0][i] != strs[j][i]) return prefix;
    }

    prefix += strs[0][i];
  }

  return prefix;
};
