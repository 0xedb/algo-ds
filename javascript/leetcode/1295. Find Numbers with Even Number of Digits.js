/**
 * @param {number[]} nums
 * @return {number}
 */
var findNumbers = function (nums) {
  let found = 0;

  for (let i of nums) {
    let digits = 0;
    while (1) {
      digits++;
      if (i < 10) break;

      i = parseInt(i / 10);
    }
    found += digits % 2 == 0 ? 1 : 0;
  }

  return found;
};
