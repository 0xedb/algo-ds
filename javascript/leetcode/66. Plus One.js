/**
 * @param {number[]} digits
 * @return {number[]}
 */
var plusOne = function(digits) {
  let carry = 0;
  const start = digits.length - 1;

  for (let i = start; i >= 0; i--) {
    if (i === start) digits[start] += 1;
    else digits[i] += carry;

    if (digits[i] < 10) return digits;
    digits[i] %= 10;
    carry = 1;

    if (i === 0 && carry) {
      digits.splice(0, 0, carry);
    }
  }

  return digits;
};
