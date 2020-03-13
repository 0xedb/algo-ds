/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

bool isPalindrome(struct ListNode *head)
{
  if (!head)
    return true;
  struct ListNode *late = head;
  struct ListNode *early = head->next;
  struct ListNode *prev = NULL;

  while (early)
  {
    early = early->next ? early->next->next : NULL;
    late = late->next;
  }

  struct ListNode *cur = NULL;
  struct ListNode *mid = late;
  late = NULL;

  while (mid)
  {
    cur = mid;
    mid = mid->next;
    cur->next = prev;
    prev = cur;
  }

  while (cur)
  {
    if (head->val != cur->val)
      return false;
    head = head->next;
    cur = cur->next;
  }

  return true;
}
