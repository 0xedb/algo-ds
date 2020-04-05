/**
 * Definition for a binary tree node.
 * function TreeNode(val) {
 *     this.val = val;
 *     this.left = this.right = null;
 * }
 */
/**
 * @param {TreeNode} root
 * @return {number[][]}
 */
var levelOrderBottom = function (root) {
  const result = [];
  if (!root) return result;

  let visited = [];
  visited.push(root);
  let size = 1;

  while (1) {
    let temp = [];
    let added = 0;
    while (size) {
      let removed = visited.shift();
      temp.push(removed.val);
      if (removed.left) {
        visited.push(removed.left);
        added++;
      }
      if (removed.right) {
        visited.push(removed.right);
        added++;
      }
      size--;
    }
    result.push(temp);
    temp = [];
    size = added;
    added = 0;
    if (size === 0) break;
  }
  return result.reverse();
};
