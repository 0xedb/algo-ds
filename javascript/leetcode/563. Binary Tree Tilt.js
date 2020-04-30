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
var findTilt = function (root) {
  let sum = 0;

  const tilt = (root) => {
    if (!root) return 0;

    let left = tilt(root.left);
    let right = tilt(root.right);

    sum += Math.abs(left - right);

    return left + right + root.val;
  };

  tilt(root);

  return sum;
};
