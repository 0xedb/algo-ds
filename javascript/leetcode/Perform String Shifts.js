/**
 * @param {string} s
 * @param {number[][]} shift
 * @return {string}
 */
var stringShift = function (s, shift) {
  const str = [];
  shift.forEach((i) => {
    let amount = i[1];

    if (i[0] === 0) {
      while (amount--) {
        s += s[0];
        s = s.slice(1);
      }
    } else {
      while (amount--) {
        let end = s[s.length - 1];
        s = end + s.slice(0, s.length - 1);
      }
    }
  });
  return s;
};
