/**
 * @param {number} num
 * @return {string}
 */
var convertToBase7 = function (num) {
  if (num == 0) return "0";
  const digits = [];
  const base = 7;
  let ans = "";

  num < 0 ? ((num *= -1), (ans += "-")) : "";

  while (num) {
    digits.push(num % base);
    num = Math.floor(num / base);
  }

  for (let i = digits.length - 1; i >= 0; --i) ans += digits[i];

  return ans;
};
