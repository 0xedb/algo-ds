/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @return {number[]}
 */
var nextLargerNodes = function (head) {
  const nums = [],
    stk = [];

  while (head) {
    nums.push(head.val);
    head = head.next;
  }

  for (let i = nums.length - 1; i >= 0; --i) {
    let val = nums[i];

    while (stk.length && stk[stk.length - 1] <= nums[i]) stk.pop();

    nums[i] = stk.length ? stk[stk.length - 1] : 0;
    stk.push(val);
  }

  return nums;
};
