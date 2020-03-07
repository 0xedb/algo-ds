/**
 * Definition for a binary tree node.
 * function TreeNode(val) {
 *     this.val = val;
 *     this.left = this.right = null;
 * }
 */
/**
 * @param {TreeNode} root
 * @param {number} val
 * @return {TreeNode}
 */
var insertIntoBST = function(root, val) {
  let cur = root;

  while (cur) {
    if (val > cur.val) {
      if (!cur.right) {
        cur.right = new TreeNode(val);
        return root;
      }
      cur = cur.right;
    }

    if (val < cur.val) {
      if (!cur.left) {
        cur.left = new TreeNode(val);
        return root;
      }
      cur = cur.left;
    }
  }

  return root;
};
