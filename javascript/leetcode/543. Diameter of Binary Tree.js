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
var diameterOfBinaryTree = function (root) {
  let ans = 0;
  let dfs = (function dim(root) {
    if (!root) return 0;

    const left = dim(root.left);
    const right = dim(root.right);

    ans = Math.max(ans, left + right);

    return Math.max(left, right) + 1;
  })(root);

  return ans;
};
