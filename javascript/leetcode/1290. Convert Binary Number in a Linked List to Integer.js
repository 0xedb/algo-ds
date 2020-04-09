/**
 * Definition for singly-linked list.
 * function ListNode(val) {
 *     this.val = val;
 *     this.next = null;
 * }
 */
/**
 * @param {ListNode} head
 * @return {number}
 */
var getDecimalValue = function (head) {
  let ans = 0;
  let exp = 0;

  let nav = head;
  while (nav) {
    exp++;
    nav = nav.next;
  }

  nav = head;
  while (nav) {
    ans += nav.val * Math.pow(2, --exp);
    nav = nav.next;
  }

  return ans;
};
