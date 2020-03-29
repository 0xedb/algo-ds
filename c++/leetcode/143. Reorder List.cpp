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
  ListNode *split(ListNode *);
  ListNode *reverse(ListNode *);
  ListNode *merge(ListNode *, ListNode *);
  void reorderList(ListNode *head)
  {
    if (!head || !head->next || !head->next->next)
      return;

    ListNode *rvsd = reverse(split(head));
    head = merge(head, rvsd);
  }
};

ListNode *Solution::merge(ListNode *front, ListNode *mid)
{
  ListNode *root = new ListNode(0);
  ListNode *nav = root;

  while (front || mid)
  {
    if (front)
    {
      nav->next = front;
      nav = nav->next;
      front = front->next;
    }
    if (mid)
    {
      nav->next = mid;
      nav = nav->next;
      mid = mid->next;
    }
  }

  return root->next;
}

ListNode *Solution::split(ListNode *root)
{
  ListNode *nav = root;
  ListNode *first = root;
  ListNode *second = first->next;

  while (second)
  {
    first = first->next;
    second = second->next ? second->next->next : nullptr;
    if (!second)
      nav->next = nullptr;
    else
      nav = first;
  }

  return first;
}

ListNode *Solution::reverse(ListNode *root)
{
  ListNode *prev = nullptr;
  ListNode *nav = root;
  while (root)
  {
    nav = root;
    root = root->next;
    nav->next = prev;
    prev = nav;
  }

  return nav;
}