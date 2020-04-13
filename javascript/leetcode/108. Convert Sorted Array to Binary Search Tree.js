/**
 * Definition for a binary tree node.
 * function TreeNode(val) {
 *     this.val = val;
 *     this.left = this.right = null;
 * }
 */
/**
 * @param {number[]} nums
 * @return {TreeNode}
 */
var sortedArrayToBST = function (nums) {
  if (!nums.length) return null;

  const mid = Math.floor(nums.length / 2);
  const root = new TreeNode(nums[mid]);

  if (nums.length === 1) return root;

  let right = nums.splice(mid + 1);
  let left = nums.splice(0, mid);

  root.left = sortedArrayToBST(left);
  root.right = sortedArrayToBST(right);

  return root;
};
