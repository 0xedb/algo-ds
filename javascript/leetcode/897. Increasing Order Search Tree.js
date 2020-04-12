/**
 * Definition for a binary tree node.
 * function TreeNode(val) {
 *     this.val = val;
 *     this.left = this.right = null;
 * }
 */
/**
 * @param {TreeNode} root
 * @return {TreeNode}
 */
var increasingBST = function (root) {
  let ans = new TreeNode(0);
  let cur = ans;

  void (function inorder(root) {
    if (!root) return;

    inorder(root.left);
    root.left = null;
    cur.right = root;
    cur = root;
    inorder(root.right);
  })(root);

  return ans.right;
};
