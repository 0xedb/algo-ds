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
var countNodes = function(root) {
  return count(root, 0);
};

function count(root, c = 0) {
  if (!root) return 0;
  if (root) c++;

  c += count(root.left);
  c += count(root.right);

  return c;
}
