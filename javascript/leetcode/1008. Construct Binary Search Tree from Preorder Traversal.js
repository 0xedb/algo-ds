/**
 * Definition for a binary tree node.
 * function TreeNode(val) {
 *     this.val = val;
 *     this.left = this.right = null;
 * }
 */
/**
 * @param {number[]} preorder
 * @return {TreeNode}
 */
var bstFromPreorder = function (preorder) {
  let ind = 0;

  const bst = (preorder, upper) => {
    if (ind === preorder.length || preorder[ind] > upper) return null;

    const root = new TreeNode(preorder[ind]);
    ++ind;
    root.left = bst(preorder, root.val);
    root.right = bst(preorder, upper);
    return root;
  };

  return bst(preorder, Number.MAX_VALUE);
};
