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
 * @return {boolean}
 */
var isCompleteTree = function (root) {
  let q = [root];
  let found_null = false;

  while (q.length) {
    const sz = q.length;

    for (let i = 0; i < sz; ++i) {
      const front = q[0];

      if (!front) found_null = true;
      else {
        if (found_null) return false;
        q.push(front.left);
        q.push(front.right);
      }

      q = q.slice(1);
    }
  }

  return true;
};
