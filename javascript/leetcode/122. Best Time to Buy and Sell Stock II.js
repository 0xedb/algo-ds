/**
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function (prices) {
  if (!prices.length) return 0;
  let max = 0;

  prices.forEach((el, ind) => {
    if (el > prices[ind - 1]) max += el - prices[ind - 1];
  });

  return max;
};
