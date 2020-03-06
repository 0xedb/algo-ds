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
  ListNode *reverseList(ListNode *head)
  {
    ListNode *prev = nullptr;
    ListNode *current = nullptr;

    while (head)
    {
      current = head;
      head = head->next;
      current->next = prev;
      prev = current;
    }

    return current;
  }
};