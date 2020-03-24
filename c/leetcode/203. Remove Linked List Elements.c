/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode *removeElements(struct ListNode *head, int val)
{
  if (!head)
    return head;

  struct ListNode *nxt = removeElements(head->next, val);
  if (head->val == val)
    head = nxt;
  else
    head->next = nxt;

  return head;
}
