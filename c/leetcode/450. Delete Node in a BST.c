/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

struct TreeNode *small(struct TreeNode *root)
{
  while (root->left)
    root = root->left;
  return root;
}

struct TreeNode *deleteNode(struct TreeNode *root, int key)
{
  if (!root)
    return root;

  if (key > root->val)
    root->right = deleteNode(root->right, key);
  else if (key < root->val)
    root->left = deleteNode(root->left, key);
  else
  {
    if (!root->right && !root->left)
    {
      free(root);
      root = NULL;
    }
    else if (root->left && root->right)
    {
      struct TreeNode *sm = small(root->right);
      root->val = sm->val;
      root->right = deleteNode(root->right, root->val);
    }
    else
    {
      if (!root->right)
        root = root->left;
      else
        root = root->right;
    }
  }

  return root;
}
