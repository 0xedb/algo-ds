/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int res, kth;

int kthSmallest(struct TreeNode *root, int k)
{
  kth = k;
  inorder(root);
  return res;
}

void inorder(struct TreeNode *root)
{
  if (!root || kth == 0)
    return;

  inorder(root->left);
  kth--;
  if (kth == 0)
    res = root->val;
  else
    inorder(root->right);
}
