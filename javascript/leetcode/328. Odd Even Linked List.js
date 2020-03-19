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
var oddEvenList = function(head) {
  if (!head || !head.next) return head;

  let start = 1;
  let nav = head;
  const odd_start = new ListNode(0);
  let odd_end = odd_start;
  const even_start = new ListNode(0);
  let even_end = even_start;

  while (nav) {
    if (start % 2 === 0) {
      even_end.next = nav;
      nav = nav.next;
      even_end = even_end.next;
      even_end.next = null;
      start++;
    } else {
      odd_end.next = nav;
      nav = nav.next;
      odd_end = odd_end.next;
      odd_end.next = null;
      start++;
    }
  }

  odd_end.next = even_start.next;
  return odd_start.next;
};
