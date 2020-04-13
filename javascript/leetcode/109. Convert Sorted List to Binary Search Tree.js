/**
 * Definition for singly-linked list.
 * function ListNode(val) {
 *     this.val = val;
 *     this.next = null;
 * }
 */
/**
 * Definition for a binary tree node.
 * function TreeNode(val) {
 *     this.val = val;
 *     this.left = this.right = null;
 * }
 */
/**
 * @param {ListNode} head
 * @return {TreeNode}
 */
var sortedListToBST = function (head) {
  if (!head) return null;

  let mid = head;
  let fast = head.next;
  let before_mid = null;

  while (fast) {
    before_mid = mid;
    mid = mid.next;
    fast = fast.next ? fast.next.next : null;
  }

  if (before_mid) before_mid.next = null;

  let root = new TreeNode(mid.val);
  if (Object.is(head, mid)) return root;

  root.left = sortedListToBST(head);
  root.right = sortedListToBST(mid.next);

  return root;
};
