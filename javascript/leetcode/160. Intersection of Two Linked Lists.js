/**
 * Definition for singly-linked list.
 * function ListNode(val) {
 *     this.val = val;
 *     this.next = null;
 * }
 */

/**
 * @param {ListNode} headA
 * @param {ListNode} headB
 * @return {ListNode}
 */
var getIntersectionNode = function(headA, headB) {
  if (!headA || !headB) return null;

  let first = headA;
  let second = headB;

  while (first !== second) {
    first = first.next;
    second = second.next;

    if (first === second) return first;

    if (!first) first = headB;
    if (!second) second = headA;
  }

  return first;
};
