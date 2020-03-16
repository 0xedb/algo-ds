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
  ListNode *deleteDuplicates(ListNode *head)
  {
    if (!head || !head->next)
      return head;

    ListNode *slow = head;
    ListNode *fast = head->next;
    slow->next = nullptr;

    while (fast)
    {
      if (fast->val != slow->val)
      {
        slow->next = fast;
        slow = fast;
        fast = fast->next;
        slow->next = nullptr;
      }
      else
        fast = fast->next;
    }

    return head;
  }
};