/**
 * @param {number} L
 * @param {number} R
 * @return {number}
 */
var countPrimeSetBits = function (L, R) {
  const count_bits = (n) => {
    let c = 0;

    for (; n; ++c) n &= n - 1;

    return c;
  };

  const is_prime = (x) => {
    return (
      x === 2 ||
      x === 3 ||
      x === 5 ||
      x === 7 ||
      x === 11 ||
      x === 13 ||
      x === 17 ||
      x === 19
    );
  };

  let ans = 0;

  for (let i = L; i <= R; ++i) if (is_prime(count_bits(i))) ++ans;

  return ans;
};
