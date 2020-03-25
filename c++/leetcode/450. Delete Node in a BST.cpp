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
  TreeNode *small(TreeNode *);

public:
  TreeNode *deleteNode(TreeNode *root, int key)
  {
    if (!root)
      return root;

    if (key > root->val)
      root->right = deleteNode(root->right, key);
    else if (key < root->val)
      root->left = deleteNode(root->left, key);
    else
    {
      // found
      if (!root->right && !root->left)
      {
        delete root;
        root = nullptr;
      }
      else if (root->right && root->left)
      {
        TreeNode *sm = small(root->right);
        root->val = sm->val;
        root->right = deleteNode(root->right, root->val);
      }
      else
      {
        if (!root->right)
          return root->left;
        else
          return root->right;
      }
    }

    return root;
  }
};

TreeNode *Solution::small(TreeNode *root)
{
  while (root->left)
    root = root->left;
  return root;
}