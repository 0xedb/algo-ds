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



// 2 line solution
/**
 * @param {number[]} candies
 * @param {number} extraCandies
 * @return {boolean[]}
 */
var kidsWithCandies = function(candies, extraCandies) {    
    let _max = Math.max(...candies) 
    return candies.map((el) => el + extraCandies >= _max)
};
 