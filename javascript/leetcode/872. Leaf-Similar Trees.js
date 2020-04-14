/**
 * Definition for a binary tree node.
 * function TreeNode(val) {
 *     this.val = val;
 *     this.left = this.right = null;
 * }
 */
/**
 * @param {TreeNode} root1
 * @param {TreeNode} root2
 * @return {boolean}
 */
var leafSimilar = function (root1, root2) {
  let first = [];
  let second = [];

  traverse(root1, first);
  traverse(root2, second);

  console.log(first, "---", second);

  return (
    first.every((el, i) => el === second[i]) && first.length === second.length
  );
};

function traverse(root, arr) {
  if (!root) return;

  if (!root.left && !root.right) arr.push(root.val);

  traverse(root.left, arr);
  traverse(root.right, arr);
}
