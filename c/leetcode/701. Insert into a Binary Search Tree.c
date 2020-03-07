/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

struct TreeNode *insertIntoBST(struct TreeNode *root, int val)
{
  struct TreeNode *cur = root;
  struct TreeNode node;
  node.val = val;

  while (cur)
  {
    if (val > cur->val)
    {
      if (!cur->right)
      {
        cur->right = malloc(sizeof(struct TreeNode));
        *(cur->right) = node;
        return root;
      }

      cur = cur->right;
    }

    if (val < cur->val)
    {
      if (!cur->left)
      {
        cur->left = malloc(sizeof(struct TreeNode));
        *(cur->left) = node;
        return root;
      }
      cur = cur->left;
    }
  }
  return root;
}
