/**
 * Definition for a binary tree node.
 * function TreeNode(val) {
 *     this.val = val;
 *     this.left = this.right = null;
 * }
 */
/**
 * @param {TreeNode} root
 * @return {number[]}
 */
var largestValues = function (root) {
  const result = [];
  if (!root) return result;
  let seen = [];

  seen.push(root);
  let size = 1;
  let max = 0;

  while (1) {
    let added = 0;
    max = seen[0].val;
    while (size) {
      let removed = seen.shift();
      max = max >= removed.val ? max : removed.val;
      size--;

      if (removed.left) {
        added++;
        seen.push(removed.left);
      }

      if (removed.right) {
        added++;
        seen.push(removed.right);
      }
    }
    size = added;
    result.push(max);
    if (size === 0) break;
    max = seen[0].val;
  }

  return result;
};
