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
  ListNode *removeNthFromEnd(ListNode *head, int n)
  {
    ListNode *first = new ListNode(0);
    first->next = head;

    auto slow = first;
    auto fast = first;

    for (int i = 1; i <= n + 1; ++i)
      fast = fast->next;

    while (fast)
    {
      fast = fast->next;
      slow = slow->next;
    }

    slow->next = slow->next->next;

    return first->next;
  }
};