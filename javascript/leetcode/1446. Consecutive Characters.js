/**
 * @param {string} s
 * @return {number}
 */
var maxPower = function (s) {
  let power = 1;

  const sz = s.length - 1;

  for (let i = 0; i < sz; ++i) {
    let count = 1;

    while (i < sz && s[i + 1] === s[i] && ++i) power = Math.max(power, ++count);
  }

  return power;
};
