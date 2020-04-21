/**
 * @param {number} num
 * @return {number}
 */
var maximum69Number = function (num) {
  const to_add = [];

  let ans = 0;
  let found = false;

  let factor = 10;

  while (num >= 6) {
    let rem = num % factor;
    to_add.push(rem);

    num = parseInt(num / factor) * factor;
    factor *= 10;
  }

  for (let i = to_add.length - 1; i >= 0; --i) {
    let num = to_add[i];

    if (!found && num == 6 * Math.pow(10, i)) {
      num = parseInt(num / 6) * 9;
      found = true;
    }

    ans += num;
  }

  return ans;
};
