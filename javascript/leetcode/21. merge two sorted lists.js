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
var mergeTwoLists = function(l1, l2) {
  const finalList = new ListNode(0);
  let currentList = finalList;

  while (l1 !== null && l2 !== null) {
    if (l1.val < l2.val) {
      currentList.next = l1;
      l1 = l1.next;
    } else {
      currentList.next = l2;
      l2 = l2.next;
    }

    currentList = currentList.next;
  }

  if (l1 !== null) {
    currentList.next = l1;
    l1 = l1.next;
  }

  if (l2 !== null) {
    currentList.next = l2;
    l2 = l2.next;
  }

  return finalList.next;
};
