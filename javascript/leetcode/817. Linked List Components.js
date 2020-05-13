/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @param {number[]} G
 * @return {number}
 */
var numComponents = function (head, G) {
  const seen = new Set(G);
  let connections = 0;

  while (head) {
    if (seen.has(head.val) && (!head.next || !seen.has(head.next.val)))
      ++connections;

    head = head.next;
  }

  return connections;
};
