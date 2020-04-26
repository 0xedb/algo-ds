/**
 * @param {number} N
 * @return {number}
 */
var bitwiseComplement = function (N) {
  let mask = 1;

  while (mask < N) mask = (mask << 1) | 1;

  return mask ^ N;
};
