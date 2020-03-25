/**
 * Definition for isBadVersion()
 *
 * @param {integer} version number
 * @return {boolean} whether the version is bad
 * isBadVersion = function(version) {
 *     ...
 * };
 */

/**
 * @param {function} isBadVersion()
 * @return {function}
 */
var solution = function(isBadVersion) {
  /**
   * @param {integer} n Total versions
   * @return {integer} The first bad version
   */

  return function(n) {
    let start = 0;

    if (n === 1) return 1;
    while (start < n) {
      let mid = start + parseInt((n - start) / 2);
      let bad = isBadVersion(mid);

      if (bad) n = mid;
      else start = mid + 1;
    }
    return start;
  };
};
