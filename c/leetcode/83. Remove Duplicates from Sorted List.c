/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode *deleteDuplicates(struct ListNode *head)
{
  if (!head || !head->next)
    return head;

  struct ListNode *slow = head;
  struct ListNode *fast = slow->next;
  slow->next = NULL;

  while (fast)
  {
    if (fast->val != slow->val)
    {
      slow->next = fast;
      slow = fast;
      fast = fast->next;
      slow->next = NULL;
    }
    else
      fast = fast->next;
  }

  return head;
}
