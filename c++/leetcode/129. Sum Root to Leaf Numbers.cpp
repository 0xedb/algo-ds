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
  int add(TreeNode *, int);
  int sumNumbers(TreeNode *root)
  {
    return add(root, 0);
  }
};

int Solution::add(TreeNode *root, int sum)
{
  if (!root)
    return 0;

  int total = (sum * 10) + root->val;

  if (!root->left && !root->right)
    return total;

  return add(root->left, total) + add(root->right, total);
}