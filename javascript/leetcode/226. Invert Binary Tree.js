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
var invertTree = function(root) {
  if (!root) return root;
  if (!root.right && !root.left) return root;

  // swap children
  let temp = root.right;
  root.right = root.left;
  root.left = temp;

  invertTree(root.right);
  invertTree(root.left);

  return root;
};
