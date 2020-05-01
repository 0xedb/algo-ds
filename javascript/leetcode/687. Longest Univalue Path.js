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
var longestUnivaluePath = function (root) {
  const lng = (root) => {
    if (!root) return 0;

    let left = lng(root.left);
    let right = lng(root.right);

    let a_left = 0,
      a_right = 0;

    if (root.left && root.left.val === root.val) a_left += left + 1;
    if (root.right && root.right.val === root.val) a_right += right + 1;

    ans = Math.max(ans, a_left + a_right);

    return Math.max(a_left, a_right);
  };

  let ans = 0;
  lng(root);
  return ans;
};
