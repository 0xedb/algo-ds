/**
 * @param {number} n
 * @return {number}
 */
var subtractProductAndSum = function (n) {
  let number = "" + n;
  let product = 1;
  let sum = 0;

  for (let i of number) {
    product *= parseInt(i);
    sum += parseInt(i);
  }

  return product - sum;
};
