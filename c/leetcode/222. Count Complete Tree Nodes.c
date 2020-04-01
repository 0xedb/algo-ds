/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int count(struct TreeNode *root, int c)
{
  if (!root)
    return 0;
  if (root)
    c++;

  c += count(root->left, 0);
  c += count(root->right, 0);

  return c;
}

int countNodes(struct TreeNode *root)
{
  return count(root, 0);
}
