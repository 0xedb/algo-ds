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
var deepestLeavesSum = function (root) {
  let ans = 0;
  let q = [root];

  while (q.length) {
    const sz = q.length;
    ans = 0;

    for (let i = 0; i < sz; ++i) {
      const front = q[0];

      if (front.left) q.push(front.left);
      if (front.right) q.push(front.right);

      ans += front.val;

      q = q.slice(1);
    }
  }

  return ans;
};
