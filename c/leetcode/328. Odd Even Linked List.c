/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode *oddEvenList(struct ListNode *head)
{
  if (!head || !head->next)
    return head;

  int start = 1;
  struct ListNode *nav = head;
  struct ListNode *odd_start = (struct ListNode *)malloc(sizeof(struct ListNode));
  struct ListNode *odd_end = odd_start;
  struct ListNode *even_start = (struct ListNode *)malloc(sizeof(struct ListNode));
  struct ListNode *even_end = even_start;

  while (nav)
  {
    if (start % 2 == 0)
    {
      // even
      even_end->next = nav;
      nav = nav->next;
      even_end = even_end->next;
      even_end->next = NULL;
      start++;
    }
    else
    {
      // odd
      odd_end->next = nav;
      nav = nav->next;
      odd_end = odd_end->next;
      odd_end->next = NULL;
      start++;
    }
  }

  odd_end->next = even_start->next;
  odd_start = odd_start->next;
  return odd_start;
}
