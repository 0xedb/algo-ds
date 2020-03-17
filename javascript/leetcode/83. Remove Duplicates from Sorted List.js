/**
 * Definition for singly-linked list.
 * function ListNode(val) {
 *     this.val = val;
 *     this.next = null;
 * }
 */
/**
 * @param {ListNode} head
 * @return {ListNode}
 */
var deleteDuplicates = function(head) {
  if (!head || !head.next) return head;

  let slow = head;
  let fast = slow.next;
  slow.next = null;

  while (fast) {
    if (fast.val !== slow.val) {
      slow.next = fast;
      slow = fast;
      fast = fast.next;
      slow.next = null;
      continue;
    }
    fast = fast.next;
  }

  return head;
};
