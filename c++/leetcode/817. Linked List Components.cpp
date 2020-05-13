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
  int numComponents(ListNode *head, vector<int> &G)
  {
    unordered_set<int> seen{G.begin(), G.end()};
    int connections{};

    while (head)
    {
      if (seen.count(head->val) && (!head->next || !seen.count(head->next->val)))
        ++connections;

      head = head->next;
    }

    return connections;
  }
};