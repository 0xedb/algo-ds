/**
 * @param {number[]} pushed
 * @param {number[]} popped
 * @return {boolean}
 */
var validateStackSequences = function (pushed, popped) {
  let i = 0,
    j = i;

  pushed.forEach((el) => {
    pushed[i++] = el;

    while (i > 0 && pushed[i - 1] === popped[j]) {
      --i;
      ++j;
    }
  });

  return i == 0;
};
