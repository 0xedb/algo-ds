/**
 * @param {number} num
 * @return {number}
 */
var findComplement = function (num) {
  let dupe = num;
  let mask = 0;

  while (dupe != 0) {
    dupe >>= 1;
    mask = (mask << 1) | 1;
  }

  return num ^ mask;
};
