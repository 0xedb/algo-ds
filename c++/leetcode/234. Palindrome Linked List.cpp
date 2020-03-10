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
  bool isPalindrome(ListNode *head)
  {
    if (!head)
      return true;
    ListNode *late = head;
    ListNode *early = head->next;
    ListNode *prev = nullptr;

    while (early)
    {
      early = early->next ? early->next->next : nullptr;
      late = late->next;
    }

    // divide list
    ListNode *mid = late;
    late = nullptr;
    ListNode *cur = nullptr;

    // reverse list half
    while (mid)
    {
      cur = mid;
      mid = mid->next;
      cur->next = prev;
      prev = cur;
    }

    // compare values
    while (cur)
    {
      if (head->val != cur->val)
        return false;
      head = head->next;
      cur = cur->next;
    }

    return true;
  }
};