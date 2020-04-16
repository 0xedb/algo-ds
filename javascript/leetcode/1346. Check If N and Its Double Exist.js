/**
 * @param {number[]} arr
 * @return {boolean}
 */
var checkIfExist = function (arr) {
  const seen = new Map();

  arr.forEach((el) => {
    if (seen.get(el) === undefined || seen.get(el) === null) seen.set(el, 1);
    else seen.set(el, seen.get(el) + 1);
  });

  let ans = false;

  seen.forEach((val, key) => {
    if (seen.has(key * 2)) {
      if (key * 2 === key && val < 2) {
      } else ans = true;
    }
  });

  console.log(ans);

  return ans || false;
};
