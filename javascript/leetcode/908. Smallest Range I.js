/**
 * @param {number[]} A
 * @param {number} K
 * @return {number}
 */
var smallestRangeI = function (A, K) {
  /*
   *   if A's size is 1 return 0
   *   find max and min values in A
   *   minimize max value (ie. subtract K)
   *   maximimze min value (ie. add K)
   *   find difference b/n max and min
   *   if difference is negative, return 0 or diff. otherwise
   */

  let diff = 0;
  let max_min = new Array(2);

  if (A.length === 1) return diff;

  // get max
  max_min[0] = Math.max(...A);

  // get min
  max_min[1] = Math.min(...A);

  // minimize max
  max_min[0] -= K;

  // maximize min
  max_min[1] += K;

  diff = max_min[0] - max_min[1];

  return diff < 0 ? 0 : diff;
};
