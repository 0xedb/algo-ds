/**
 * // Definition for a Node.
 * function Node(val,children) {
 *    this.val = val;
 *    this.children = children;
 * };
 */

/**
 * @param {Node} root
 * @return {number[]}
 */
var postorder = function (root) {
  let ans = [];
  post(root, ans);
  return ans;
};

function post(root, ans) {
  if (!root) return;

  root.children.forEach((el) => post(el, ans));
  ans.push(root.val);
}
