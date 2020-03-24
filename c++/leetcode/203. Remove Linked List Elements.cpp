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
  ListNode *removeElements(ListNode *head, int val)
  {
    if (!head)
      return head;

    ListNode *nxt = removeElements(head->next, val);
    if (head->val == val)
      head = nxt;
    else
      head->next = nxt;

    return head;
  }
};