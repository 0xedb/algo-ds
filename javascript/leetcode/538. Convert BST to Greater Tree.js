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
 * @return {TreeNode}
 */
var convertBST = function (root) {
  let sum = 0;

  const solve = (root) => {
    if (!root) return;

    solve(root.right);

    root.val += sum;
    sum = root.val;

    solve(root.left);
  };

  solve(root);
  return root;
};
