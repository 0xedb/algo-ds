/**
 * @param {number} n
 * @return {boolean}
 */
var hasAlternatingBits = function (n) {
  const digits = [];
  while (n) {
    digits.push(n % 2);
    n = parseInt(n / 2);
  }

  for (let i = 1; i < digits.length; i++) {
    if (digits[i] === digits[i - 1]) return false;
  }

  return true;
};
