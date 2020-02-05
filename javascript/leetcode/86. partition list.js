/**
 * Definition for singly-linked list.
 * function ListNode(val) {
 *     this.val = val;
 *     this.next = null;
 * }
 */
/**
 * @param {ListNode} head
 * @param {number} x
 * @return {ListNode}
 */
var partition = function(head, x) {
  let left_head = new ListNode(null);
  let right_head = new ListNode(null);

  let left = left_head;
  let right = right_head;

  while (head) {
    if (head.val < x) {
      left.next = head;
      left = left.next;
    } else {
      right.next = head;
      right = right.next;
    }
    head = head.next;
  }

  right.next = null;

  left.next = right_head.next;

  return left_head.next;
};
