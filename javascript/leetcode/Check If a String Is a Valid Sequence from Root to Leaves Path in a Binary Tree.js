/**
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */
/**
 * @param {TreeNode} root
 * @param {number[]} arr
 * @return {boolean}
 */
var isValidSequence = function (root, arr) {
  return (function valid(root, pos) {
    if (!root || pos >= arr.length) return false;

    if (!root.left && !root.right) {
      if (pos === arr.length - 1 && arr[pos] === root.val) return true;

      return false;
    }

    if (arr[pos] === root.val) {
      ++pos;
      return valid(root.left, pos) || valid(root.right, pos);
    }

    return false;
  })(root, 0);
};
