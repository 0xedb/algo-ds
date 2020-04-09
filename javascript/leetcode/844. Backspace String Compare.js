/**
 * @param {string} S
 * @param {string} T
 * @return {boolean}
 */
var backspaceCompare = function (S, T) {
  return removeHash(S) === removeHash(T);
};

function removeHash(str) {
  const ch = [];

  for (let i of str) {
    ch.push(i);
    if (i === "#") {
      ch.pop();
      if (ch.length) ch.pop();
    }
  }

  return String(ch);
}
