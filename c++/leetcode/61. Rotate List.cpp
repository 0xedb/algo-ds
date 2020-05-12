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
  ListNode *rotateRight(ListNode *head, int k)
  {
    if (!head || k == 0)
      return head;

    int list_len = 1;

    auto new_head = head;
    auto tail = head;

    while (tail->next)
    {
      ++list_len;
      tail = tail->next;
    }

    tail->next = head;

    if (k %= list_len)
    {
      for (auto i = 0; i < list_len - k; ++i)
        tail = tail->next;
    }

    new_head = tail->next;
    tail->next = nullptr;

    return new_head;
  }
};