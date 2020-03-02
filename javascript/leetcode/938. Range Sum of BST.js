/**
 * Definition for a binary tree node.
 * function TreeNode(val) {
 *     this.val = val;
 *     this.left = this.right = null;
 * }
 */
/**
 * @param {TreeNode} root
 * @param {number} L
 * @param {number} R
 * @return {number}
 */
var rangeSumBST = function(root, L, R) {
  if (!root) return 0;
  let result = 0;

  if (root.val >= L && root.val <= R) result += root.val;
  if (root.val > L) result += rangeSumBST(root.left, L, R);
  if (root.val < R) result += rangeSumBST(root.right, L, R);

  return result;
};
