/**
 * @param {number[]} cost
 * @return {number}
 */
var minCostClimbingStairs = function (cost) {
  let min_cost = cost[0] > cost[1] ? cost[1] : cost[0];

  if (cost.length < 3) return min_cost;

  for (let i = 2; i <= cost.length; ++i) {
    if (i === cost.length) {
      min_cost = cost[i - 1] < cost[i - 2] ? cost[i - 1] : cost[i - 2];
      break;
    }

    let first = cost[i] + cost[i - 1];
    let second = cost[i] + cost[i - 2];

    cost[i] = first < second ? first : second;
    min_cost = cost[i] < min_cost ? cost[i] : min_cost;
  }

  return min_cost;
};
