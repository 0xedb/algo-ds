/**
 * Definition for a binary tree node.
 * function TreeNode(val) {
 *     this.val = val;
 *     this.left = this.right = null;
 * }
 */

/**
 * @param {TreeNode} root
 */
var BSTIterator = function(root) {
  this._root = root;
  this._sorted = [];
  this._pos = 0;
  this.inorder(root);
};

/**
 * @return the next smallest number
 * @return {number}
 */
BSTIterator.prototype.next = function() {
  return this._sorted[this._pos++];
};

/**
 * @return whether we have a next smallest number
 * @return {boolean}
 */
BSTIterator.prototype.hasNext = function() {
  return this._pos < this._sorted.length;
};

BSTIterator.prototype.inorder = function(root) {
  if (!root) return;

  this.inorder(root.left);
  this._sorted.push(root.val);
  this.inorder(root.right);
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * var obj = new BSTIterator(root)
 * var param_1 = obj.next()
 * var param_2 = obj.hasNext()
 */
