/**
 * @param {number[]} arr
 * @return {number[]}
 */
var sortByBits = function (arr) {
  const count_bits = (n) => {
    let c = 0;

    for (; n; ++c) n &= n - 1;

    return c;
  };

  arr.sort((a, b) => {
    if (count_bits(a) !== count_bits(b)) return count_bits(a) - count_bits(b);

    return a - b;
  });

  return arr;
};
