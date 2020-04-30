/**
 * @param {number} n
 * @return {number[]}
 */
var getNoZeroIntegers = function (n) {
  let A = n,
    B = 0;

  const hasZero = (num) => {
    if (!num) return true;

    while (num) {
      if (num % 10 === 0) return true;
      num = parseInt(num / 10);
    }

    return false;
  };

  while (hasZero(A) || hasZero(B)) {
    --A;
    ++B;
  }

  return [A, B];
};
