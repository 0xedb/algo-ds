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
  ListNode *middleNode(ListNode *head)
  {
    ListNode *late = head;
    ListNode *early = head->next;

    while (early)
    {
      early = early->next ? early->next->next : nullptr;
      late = late->next;
    }

    return late;
  }
};