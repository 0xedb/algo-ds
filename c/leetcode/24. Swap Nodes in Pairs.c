/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode *swapPairs(struct ListNode *head)
{
  if (!head)
    return NULL;
  if (!head->next)
    return head;

  struct ListNode *cur = head->next;
  head->next = cur->next;
  cur->next = head;
  head = cur;
  head->next->next = swapPairs(head->next->next);

  return head;
}
