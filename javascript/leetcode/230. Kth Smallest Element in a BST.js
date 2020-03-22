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
 * @return {number}
 */
let kth, res;

var kthSmallest = function(root, k) {
  kth = k;
  res = 0;
  small(root);
  return res;
};

function small(root) {
  if (!root || kth === 0) return;
  small(root.left);
  kth--;
  if (kth === 0) res = root.val;
  else small(root.right);
}
