/**
 * // Definition for a Node.
 * function Node(val, children) {
 *    this.val = val;
 *    this.children = children;
 * };
 */

/**
 * @param {Node} root
 * @return {number[]}
 */
var preorder = function (root) {
  let ans = [];
  ord(root, ans);
  return ans;
};

function ord(root, ans) {
  if (!root) return;
  ans.push(root.val);
  root.children.forEach((el) => ord(el, ans));
}
