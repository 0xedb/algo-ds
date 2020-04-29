/**
 * @param {number[]} height
 * @return {number}
 */
var maxArea = function (height) {
  let _max = 0,
    start = 0,
    end = height.length - 1;

  while (start < end) {
    _max = Math.max(_max, Math.min(height[start], height[end]) * (end - start));

    if (height[start] < height[end]) ++start;
    else --end;
  }

  return _max;
};
