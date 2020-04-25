/**
 * @param {number} candies
 * @param {number} num_people
 * @return {number[]}
 */
var distributeCandies = function (candies, num_people) {
  const ans = new Array(num_people);
  ans.fill(0);

  for (let i = 0; candies > 0; ++i) {
    ans[i % num_people] += Math.min(candies, i + 1);
    candies -= i + 1;
  }

  return ans;
};
