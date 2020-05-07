/**
 * Definition for a binary tree node.
 * function TreeNode(val) {
 *     this.val = val;
 *     this.left = this.right = null;
 * }
 */
/**
 * @param {TreeNode} root
 * @return {number}
 */
var sumNumbers = function (root) {
  const add = (root, sum) => {
    if (!root) return 0;

    let total = sum * 10 + root.val;

    if (!root.right && !root.left) return total;

    return add(root.left, total) + add(root.right, total);
  };

  return add(root, 0);
};
