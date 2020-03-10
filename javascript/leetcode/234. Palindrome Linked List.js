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
var isPalindrome = function(head) {
  if (!head) return true;
  let late = head;
  let early = head.next;
  let prev = null;

  while (early) {
    early = early.next ? early.next.next : null;
    late = late.next;
  }

  let cur = null;
  let mid = late;
  late = null;

  while (mid) {
    cur = mid;
    mid = mid.next;
    cur.next = prev;
    prev = cur;
  }

  while (cur) {
    if (head.val != cur.val) return false;
    head = head.next;
    cur = cur.next;
  }
  return true;
};
