/**
 * @param {number[][]} intervals
 * @param {number[]} newInterval
 * @return {number[][]}
 */
var insert = function (intervals, newInterval) {
  const ans = [];

  if (!intervals.length) return [newInterval];

  let start = 0;
  const sz = intervals.length;

  while (start < sz && intervals[start][1] < newInterval[0]) {
    ans.push(intervals[start]);
    ++start;
  }

  while (start < sz && intervals[start][0] <= newInterval[1]) {
    newInterval[0] = Math.min(newInterval[0], intervals[start][0]);
    newInterval[1] = Math.max(newInterval[1], intervals[start][1]);
    ++start;
  }

  ans.push(newInterval);

  while (start < sz) {
    ans.push(intervals[start]);
    ++start;
  }

  return ans;
};
