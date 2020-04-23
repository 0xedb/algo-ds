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
var sumRootToLeaf = function (root) {
  return preorder(root, 0);
};

function preorder(root, val) {
  if (!root) return 0;

  val = val * 2 + root.val;
  return root.left == root.right
    ? val
    : preorder(root.right, val) + preorder(root.left, val);
}
