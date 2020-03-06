/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode *reverseList(struct ListNode *head)
{
  struct ListNode *prev = NULL;
  struct ListNode *current = NULL;

  while (head)
  {
    current = head;
    head = head->next;
    current->next = prev;
    prev = current;
  }

  return current;
}
