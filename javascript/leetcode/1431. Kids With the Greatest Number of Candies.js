/**
 * @param {number[]} candies
 * @param {number} extraCandies
 * @return {boolean[]}
 */
var kidsWithCandies = function (candies, extraCandies) {
  const ans = new Array(candies.length);

  let _max = Math.max(...candies);

  candies.forEach((el, ind) => {
    ans[ind] = el + extraCandies >= _max ? true : false;
  });

  return ans;
};
