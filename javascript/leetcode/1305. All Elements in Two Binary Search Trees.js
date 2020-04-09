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
 * @return {number[]}
 */
var getAllElements = function (root1, root2) {
  const first = [];
  const second = [];
  const ans = [];

  inorder(root1, first);
  inorder(root2, second);

  let i = 0;
  let j = 0;

  while (i < first.length || j < second.length) {
    if (i < first.length && j < second.length) {
      if (first[i] <= second[j]) ans.push(first[i++]);
      else ans.push(second[j++]);
    } else if (i < first.length) ans.push(first[i++]);
    else ans.push(second[j++]);
  }
  return ans;
};

function inorder(root, vec) {
  if (!root) return;

  inorder(root.left, vec);
  vec.push(root.val);
  inorder(root.right, vec);
}
