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
var goodNodes = function (root) {
  let g = 0;
  let _max = root.val;

  const good = (root, _max) => {
    if (!root) return;

    if (root.val >= _max) ++g;

    _max = Math.max(_max, root.val);

    good(root.left, _max);
    good(root.right, _max);
  };

  good(root, _max);
  return g;
};
