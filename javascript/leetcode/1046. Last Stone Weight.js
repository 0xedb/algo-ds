/**
 * @param {number[]} stones
 * @return {number}
 */
var lastStoneWeight = function (stones) {
  while (stones.length > 1) {
    const sz = stones.length;
    stones.sort((a, b) => a - b);

    if (stones[sz - 1] === stones[sz - 2]) {
      stones.pop();
      stones.pop();
      continue;
    }
    stones[sz - 2] = stones[sz - 1] - stones[sz - 2];
    stones.pop();
  }
  return stones.length === 0 ? 0 : stones[0];
};
