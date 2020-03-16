/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
  ListNode *swapPairs(ListNode *head)
  {
    return swapp(head);
  };
  ListNode *swapp(ListNode *);
};

ListNode *Solution::swapp(ListNode *head)
{
  if (!head)
    return nullptr;
  if (!head->next)
    return head;

  ListNode *cur = head->next;
  head->next = cur->next;
  cur->next = head;
  head = cur;
  head->next->next = swapp(head->next->next);

  return head;
}