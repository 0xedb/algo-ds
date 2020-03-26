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
  bool check2(TreeNode *, TreeNode *);
  bool isSymmetric(TreeNode *root)
  {
    if (!root)
      return true;
    return check2(root->left, root->right);
  }
};

bool Solution::check2(TreeNode *left, TreeNode *right)
{
  if (!left && !right)
    return true;
  if (!left || !right)
    return false;
  return left->val == right->val &&
         check2(left->right, right->left) &&
         check2(left->left, right->right);
}