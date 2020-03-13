/**
 * Definition for singly-linked list.
 * function ListNode(val) {
 *     this.val = val;
 *     this.next = null;
 * }
 */

/**
 * @param {ListNode} head
 * @return {boolean}
 */
var hasCycle = function(head) {
  if (!head) return false;
  let fast = head.next;

  while (fast) {
    if (fast === head) return true;
    fast = fast.next ? fast.next.next : null;
    head = head.next;
  }

  return false;
};
