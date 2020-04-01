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
  int count(TreeNode *, int);
  int countNodes(TreeNode *root)
  {
    return count(root, 0);
  }
};

int Solution::count(TreeNode *root, int c = 0)
{
  if (!root)
    return 0;
  if (root)
    c++;

  c += count(root->left);
  c += count(root->right);

  return c;
}