/**
 * @param {number} left
 * @param {number} right
 * @return {number[]}
 */
var selfDividingNumbers = function (left, right) {
  const s_divide = [];

  for (let i = left; i <= right; i++) {
    let digits = i;
    let self_d = true;

    while (digits) {
      let digit = digits % 10;
      if (!digit || i % digit !== 0) {
        self_d = false;
        break;
      }
      digits = parseInt(digits / 10);
    }

    if (self_d) s_divide.push(i);
  }

  return s_divide;
};
