/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

bool check2(struct TreeNode *left, struct TreeNode *right)
{
  if (!left && !right)
    return true;
  if (!left || !right)
    return false;
  return left->val == right->val &&
         check2(left->right, right->left) &&
         check2(left->left, right->right);
}

bool isSymmetric(struct TreeNode *root)
{
  if (!root)
    return true;
  return check2(root->left, root->right);
}
