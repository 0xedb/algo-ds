/**
 * Definition for singly-linked list.
 * function ListNode(val) {
 *     this.val = val;
 *     this.next = null;
 * }
 */
/**
 * @param {ListNode} head
 * @param {number} k
 * @return {ListNode}
 */
var rotateRight = function (head, k) {
  if (!head || k == 0) return head;

  let list_len = 1;
  let new_head = head;
  let tail = head;

  while (tail.next) {
    ++list_len;
    tail = tail.next;
  }

  tail.next = head;

  if ((k %= list_len)) {
    for (let i = 0; i < list_len - k; ++i) tail = tail.next;
  }

  new_head = tail.next;
  tail.next = null;
  return new_head;
};
