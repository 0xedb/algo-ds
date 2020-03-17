/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB)
{
  if (!headA || !headB)
    return NULL;

  struct ListNode *first = headA;
  struct ListNode *second = headB;

  while (first != second)
  {
    first = first->next;
    second = second->next;

    if (first == second)
      return first;

    if (!first)
      first = headB;
    if (!second)
      second = headA;
  }

  return first;
}