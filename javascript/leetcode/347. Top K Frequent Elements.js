/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number[]}
 */
var topKFrequent = function (nums, k) {
  const seen = new Map();
  const freq = [];

  nums.forEach((el) => {
    if (seen.has(el)) seen.set(el, seen.get(el) + 1);
    else seen.set(el, 1);
  });

  Array.from(seen.entries()).forEach((el) => {
    freq.push({ num: el[0], freq: el[1] });
  });

  const ans = [];
  freq.sort((a, b) => b.freq - a.freq);

  for (let i = 0; i < k; ++i) ans.push(freq[i].num);

  return ans;
};
