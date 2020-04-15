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
var addTwoNumbers = function (l1, l2) {
  const one = [];
  const two = [];

  while (l1) {
    one.push(l1.val);
    l1 = l1.next;
  }

  while (l2) {
    two.push(l2.val);
    l2 = l2.next;
  }

  let latest = null;
  let carry = 0;

  while (one.length || two.length) {
    let sum = 0;
    if (one.length && two.length) {
      sum = one[one.length - 1] + two[two.length - 1];
      one.pop();
      two.pop();
    } else if (one.length) {
      sum = one[one.length - 1];
      one.pop();
    } else {
      sum = two[two.length - 1];
      two.pop();
    }

    sum += carry;
    carry = sum > 9 ? 1 : 0;
    let l = new ListNode(sum % 10);
    l.next = latest;
    latest = l;
  }

  if (carry) {
    let l = new ListNode(1);
    l.next = latest;
    latest = l;
  }

  return latest;
};
