/**
 * @param {number} n
 * @return {number}
 */
var countPrimes = function (n) {
  let count = 0;
  const nums = new Array(n);
  nums.fill(true);

  for (let i = 2; i * i < n; ++i) {
    for (let j = 2; j * i < n; ++j) nums[j * i] = false;
  }

  for (let i = 2; i < n; ++i) {
    if (nums[i]) ++count;
  }

  return count;
};
