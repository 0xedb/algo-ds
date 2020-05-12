/**
 * @param {number} num
 * @return {string}
 */
var toHex = function (num) {
  const _hex = "0123456789abcdef";

  if (!num) return "0";
  if (num < 0) num = num >>> 0;

  let ans = [];

  while (num) {
    ans.push(_hex[num % 16]);
    num = parseInt(num / 16);
  }

  return ans.reverse().join("");
};
