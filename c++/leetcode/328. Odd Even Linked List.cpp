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
  ListNode *oddEvenList(ListNode *head)
  {
    if (!head || !head->next)
      return head;
    int start = 1;
    ListNode *nav = head;

    ListNode *odd_start = new ListNode;
    ListNode *odd_end = odd_start;
    ListNode *even_start = new ListNode;
    ListNode *even_end = even_start;

    while (nav)
    {
      if (start % 2 == 0)
      {
        // even
        even_end->next = nav;
        nav = nav->next;
        even_end = even_end->next;
        even_end->next = nullptr;
        start++;
      }
      else
      {
        // odd
        odd_end->next = nav;
        nav = nav->next;
        odd_end = odd_end->next;
        odd_end->next = nullptr;
        start++;
      }
    }

    // connect nodes
    odd_end->next = even_start->next;
    odd_start = odd_start->next;

    // return connected nodes
    return odd_start;
  }
};