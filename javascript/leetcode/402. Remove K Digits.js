/**
 * @param {string} num
 * @param {number} k
 * @return {string}
 */
var removeKdigits = function (num, k) {
  const ans = [];

  for (let c of num) {
    while (ans.length && ans[ans.length - 1] > c && k) {
      ans.pop();
      --k;
    }

    if (ans.length || c != "0") ans.push(c);
  }

  while (ans.length && k) {
    ans.pop();
    --k;
  }

  return ans.length ? ans.join("") : "0";
};
