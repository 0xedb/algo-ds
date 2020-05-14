/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
  vector<int> nextLargerNodes(ListNode *head)
  {
    vector<int> nums, stk;

    while (head)
    {
      nums.push_back(head->val);
      head = head->next;
    }

    for (int i = nums.size() - 1; i >= 0; --i)
    {
      auto val = nums[i];

      while (!stk.empty() && stk.back() <= nums[i])
        stk.pop_back();

      nums[i] = stk.empty() ? 0 : stk.back();
      stk.push_back(val);
    }

    return nums;
  }
};
