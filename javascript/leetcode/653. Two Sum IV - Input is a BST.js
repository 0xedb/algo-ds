/**
 * Definition for a binary tree node.
 * function TreeNode(val) {
 *     this.val = val;
 *     this.left = this.right = null;
 * }
 */
/**
 * @param {TreeNode} root
 * @param {number} k
 * @return {boolean}
 */
var findTarget = function (root, k) {
  const seen = new Set();
  return has(root, k, seen);
};

function has(root, k, seen) {
  if (!root) return false;

  if (seen.has(k - root.val)) return true;

  seen.add(root.val);

  return has(root.right, k, seen) || has(root.left, k, seen);
}
