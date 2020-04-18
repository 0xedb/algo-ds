/**
 * @param {number[]} arr
 * @return {number[][]}
 */
var minimumAbsDifference = function (arr) {
  const answer = [];
  arr.sort((a, b) => a - b);

  let min_diff = arr[1] - arr[0];
  for (let i = arr.length - 1; i > 0; --i) {
    let diff = Math.abs(arr[i] - arr[i - 1]);
    min_diff = Math.min(min_diff, diff);
  }

  for (let i = 0; i < arr.length - 1; ++i) {
    if (min_diff == Math.abs(arr[i] - arr[i + 1]))
      answer.push([arr[i], arr[i + 1]]);
  }

  return answer;
};
