/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution
{
public:
  TreeNode *sortedListToBST(ListNode *head)
  {
    if (!head)
      return nullptr;

    auto mid = head;
    auto fast = head->next;
    ListNode *before_mid = nullptr;

    // find middle of linked list
    while (fast)
    {
      before_mid = mid;
      mid = mid->next;
      fast = fast->next ? fast->next->next : nullptr;
    }

    // splits linked list into left and right parts
    if (before_mid)
      before_mid->next = nullptr;

    auto root = new TreeNode(mid->val);
    if (head == mid)
      return root;

    auto right = mid->next;
    auto left = head;

    root->left = sortedListToBST(left);
    root->right = sortedListToBST(right);

    return root;
  }
};