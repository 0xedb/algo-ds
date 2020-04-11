/**
 * @param {string} S
 * @return {string}
 */
var removeDuplicates = function (S) {
  const seen = [];
  seen.push(S[0]);

  for (let i = 1; i < S.length; ++i) {
    if (seen.length && seen[seen.length - 1] === S[i]) seen.pop();
    else seen.push(S[i]);
  }

  return seen.join("");
};
