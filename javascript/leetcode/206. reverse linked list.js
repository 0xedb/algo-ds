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
var reverseList = function(head) {
  let current = null;
  let previous;

  while (head !== null) {
    current = head;
    head = head.next;
    current.next = previous;
    previous = current;
  }

  return current;
};

// iterative
