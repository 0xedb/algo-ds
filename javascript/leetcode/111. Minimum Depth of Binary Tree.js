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
var minDepth = function (root) {
  if (!root) return 0;
  let _min = 0;

  const left = 1 + minDepth(root.left);
  const right = 1 + minDepth(root.right);

  if (root.left && root.right) _min = Math.min(left, right);
  else if (root.left) _min = left;
  else if (root.right) _min = right;
  else _min = 1;

  return _min;
};
