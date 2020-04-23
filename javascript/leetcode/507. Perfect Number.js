/**
 * @param {number} num
 * @return {boolean}
 */
var checkPerfectNumber = function (num) {
  if (num < 2) return false;

  let sum = 1;

  for (let i = 2; i * i <= num; ++i) {
    if (num % i == 0) sum += i == parseInt(num / i) ? i : i + parseInt(num / i);
    if (sum > num) return false;
  }

  return sum == num;
};
