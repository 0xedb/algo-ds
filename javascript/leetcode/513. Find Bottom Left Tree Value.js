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
var findBottomLeftValue = function (root) {
  let q = [root];
  let ans = root.val;

  while (q.length) {
    const sz = q.length;

    for (let i = 0; i < sz; ++i) {
      const front = q[0];

      if (front.right) q.push(front.right);
      if (front.left) q.push(front.left);

      ans = front.val;
      q = q.slice(1);
    }
  }

  return ans;
};
