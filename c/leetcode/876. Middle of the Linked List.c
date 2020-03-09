/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode *middleNode(struct ListNode *head)
{
  struct ListNode *late = head;
  struct ListNode *early = head->next;

  while (early)
  {
    early = early->next ? early->next->next : NULL;
    late = late->next;
  }

  return late;
}
