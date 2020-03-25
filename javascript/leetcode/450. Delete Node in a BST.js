/**
 * Definition for a binary tree node.
 * function TreeNode(val) {
 *     this.val = val;
 *     this.left = this.right = null;
 * }
 */
/**
 * @param {TreeNode} root
 * @param {number} key
 * @return {TreeNode}
 */
var deleteNode = function(root, key) {
  if (!root) return root;

  if (key > root.val) root.right = deleteNode(root.right, key);
  else if (key < root.val) root.left = deleteNode(root.left, key);
  else {
    if (!root.left && !root.right) root = null;
    else if (root.left && root.right) {
      const min = small(root.right);
      root.val = min.val;
      root.right = deleteNode(root.right, root.val);
    } else {
      if (!root.right) return root.left;
      else return root.right;
    }
  }

  return root;
};

function small(root) {
  while (root.left) root = root.left;
  return root;
}
