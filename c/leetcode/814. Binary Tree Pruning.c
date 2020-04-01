/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

struct TreeNode *pruneTree(struct TreeNode *root)
{
  if (!root)
    return NULL;

  root->right = pruneTree(root->right);
  root->left = pruneTree(root->left);

  if (root->val != 1 && !root->right && !root->left)
    return NULL;

  return root;
}
