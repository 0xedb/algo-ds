/**
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */
/**
 * @param {TreeNode} root
 * @return {number}
 */
var maxPathSum = function (root) {
  const mp = function __max(root) {
    if (!root) return;

    __max(root.left, mx);
    __max(root.right, mx);

    if (root.left && root.right) {
      let left = root.left.val;
      let right = root.right.val;

      mx = Math.max(mx, root.val + left + right);
      root.val = Math.max(root.val, Math.max(left, right) + root.val);
    } else if (root.left)
      root.val = Math.max(root.val, root.val + root.left.val);
    else if (root.right)
      root.val = Math.max(root.val, root.val + root.right.val);

    if (root.val > mx) mx = root.val;
  };

  let mx = root.val;
  mp(root);
  return mx;
};
