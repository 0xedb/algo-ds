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
 * @return {number[]}
 */
var findMode = function (root) {
  let ans = [];
  let count = 0,
    _max = 0,
    prev = 0;

  const preorder = (root) => {
    if (!root) return;

    preorder(root.left);

    count = prev == root.val ? ++count : 1;

    if (count > _max) {
      ans = [root.val];
      _max = count;
    } else if (count === _max) ans.push(root.val);

    prev = root.val;

    preorder(root.right);
  };

  preorder(root);
  return ans;
};
