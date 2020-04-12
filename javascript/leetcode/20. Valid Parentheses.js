/**
 * @param {string} s
 * @return {boolean}
 */
var isValid = function (s) {
  if (s.length % 2 !== 0) return false;

  const parenthesis = new Map([
    ["(", ")"],
    ["{", "}"],
    ["[", "]"],
  ]);

  const seen = [];

  for (let i of s) {
    if (parenthesis.has(i)) seen.push(i);
    else {
      if (seen.length === 0 || i != parenthesis.get(seen[seen.length - 1]))
        return false;
      seen.pop();
    }
  }

  return seen.length === 0;
};
