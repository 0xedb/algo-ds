/**
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function (prices) {
  const sz = prices.length;
  if (!sz) return 0;

  let max = 0;
  let min = prices[0];

  for (let i = 1; i < sz; i++) {
    if (prices[i] < min) min = prices[i];
    max = max > prices[i] - min ? max : prices[i] - min;
  }
  return max;
};
