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
  ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
  {
    stack<int> one;
    stack<int> two;

    while (l1)
    {
      one.push(l1->val);
      l1 = l1->next;
    }

    while (l2)
    {
      two.push(l2->val);
      l2 = l2->next;
    }

    ListNode *latest = nullptr;

    int carry = 0;

    while (one.size() || two.size())
    {
      int sum = 0;
      if (one.size() && two.size())
      {
        sum = one.top() + two.top();
        one.pop();
        two.pop();
      }
      else if (one.size())
      {
        sum = one.top();
        one.pop();
      }
      else
      {
        sum = two.top();
        two.pop();
      }

      sum += carry;
      carry = sum > 9 ? 1 : 0;
      auto l = new ListNode(sum % 10);
      l->next = latest;
      latest = l;
    }

    if (carry)
    {
      auto l = new ListNode(1);
      l->next = latest;
      latest = l;
    }

    return latest;
  }
};