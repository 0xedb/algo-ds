/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head)
{
  if (!head)
    return false;
  struct ListNode *fast = head->next;

  while (fast)
  {
    if (fast == head)
      return true;
    fast = fast->next ? fast->next->next : NULL;
    head = head->next;
  }

  return false;
}
