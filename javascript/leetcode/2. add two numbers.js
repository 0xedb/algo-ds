/**
 * Definition for singly-linked list.
 * function ListNode(val) {
 *     this.val = val;
 *     this.next = null;
 * }
 */
/**
 * @param {ListNode} l1
 * @param {ListNode} l2
 * @return {ListNode}
 */
var addTwoNumbers = function(l1, l2) {
  let newNode;
  let currentNode;
  let remainder = 0;

  while (l1 || l2) {
    let total = 0 + remainder;
    if (l1) {
      total += l1.val;
      l1 = l1.next;
    }
    if (l2) {
      total += l2.val;
      l2 = l2.next;
    }

    remainder = total >= 10 ? 1 : 0;
    total = total % 10;

    const latest = new ListNode(total);

    // add to new node
    if (!newNode) {
      newNode = latest;
      currentNode = newNode;
    } else {
      currentNode.next = latest;
      currentNode = latest;
    }
  }

  if (remainder) {
    currentNode.next = new ListNode(remainder);
  }

  return newNode;
};
