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
  int getDecimalValue(ListNode *head)
  {
    int ans = 0;
    int exp = 0;

    ListNode *nav = head;

    while (nav)
    {
      exp++;
      nav = nav->next;
    }

    nav = head;

    while (nav)
    {
      ans += nav->val * pow(2, --exp);
      nav = nav->next;
    }

    return ans;
  }
};