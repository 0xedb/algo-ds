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
 * @param {number[]} to_delete
 * @return {TreeNode[]}
 */
var delNodes = function (root, to_delete) {
  const heads = [];
  const seen = new Set(to_delete);

  dfs(root, heads, seen, true);

  return heads;
};

function dfs(root, heads, seen, is_root) {
  if (!root) return null;

  const deleted = seen.has(root.val);

  if (is_root && !deleted) heads.push(root);

  root.left = dfs(root.left, heads, seen, deleted);
  root.right = dfs(root.right, heads, seen, deleted);

  return deleted ? null : root;
}
