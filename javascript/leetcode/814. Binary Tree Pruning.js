/**
 * Definition for a binary tree node.
 * function TreeNode(val) {
 *     this.val = val;
 *     this.left = this.right = null;
 * }
 */
/**
 * @param {TreeNode} root
 * @return {TreeNode}
 */
var pruneTree = function(root) {
  if (!root) return null;

  root.right = pruneTree(root.right);
  root.left = pruneTree(root.left);

  if (root.val !== 1 && !root.left && !root.right) return null;

  return root;
};
