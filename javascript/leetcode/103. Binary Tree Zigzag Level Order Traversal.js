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
 * @return {number[][]}
 */
var zigzagLevelOrder = function (root) {
  const ans = [];

  if (!root) return ans;

  let alt = false;
  let q = [root];

  while (q.length) {
    const vec = [];
    const sz = q.length;

    for (let i = 0; i < sz; ++i) {
      const front = q[0];
      vec.push(front.val);

      if (front.left) q.push(front.left);

      if (front.right) q.push(front.right);

      q = q.slice(1);
    }

    if (alt) vec.reverse();

    alt = !alt;
    ans.push(vec);
  }

  return ans;
};
