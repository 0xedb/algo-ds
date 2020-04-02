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
  ListNode *reverseBetween(ListNode *head, int m, int n)
  {
    if (!head || !head->next)
      return head;
    ListNode *start = new ListNode(0);
    start->next = head;
    ListNode *nav = start;

    for (int i = 0; i <= m - 1; i++)
    {
      if (i == m - 1)
      {
        ListNode *prev = nullptr;
        ListNode *cur = nav->next;
        ListNode *pos = cur;
        ListNode *end = pos;

        // now reverse up until last
        for (; i <= n - 1; i++)
        {
          pos = cur;
          cur = cur->next;
          pos->next = prev;
          prev = pos;
        }

        nav->next = pos;
        end->next = cur;
      }
      nav = nav->next;
    }
    return start->next;
  }
};