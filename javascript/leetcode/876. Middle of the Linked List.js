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
var middleNode = function(head) {
  let late = head;
  let early = head.next;

  while (early) {
    early = early.next ? early.next.next : null;
    late = late.next;
  }

  return late;
};
