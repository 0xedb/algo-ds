/**
 * @param {number} N
 * @return {number}
 */
var fib = function(N) {
  if (N === 0) return 0;
  if (N === 1) return 1;

  let first = 0;
  let second = 1;

  for (let i = 2; i <= N; i++) {
    let third = first + second;
    first = second;
    second = third;
  }

  return second;
};
