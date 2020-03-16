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
var swapPairs = function(head) {
  if (!head) return null;
  if (!head.next) return head;

  let cur = head.next;
  head.next = cur.next;
  cur.next = head;
  head = cur;

  head.next.next = swapPairs(head.next.next);

  return head;
};
