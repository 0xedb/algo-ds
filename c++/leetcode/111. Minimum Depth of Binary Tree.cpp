/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
  int minDepth(TreeNode *root)
  {
    if (!root)
      return 0;

    int _min = 0;

    if (root->left && root->right)
    {
      int left = 1 + minDepth(root->left);
      int right = 1 + minDepth(root->right);

      _min = min(left, right);
    }
    else if (root->right)
      _min = 1 + minDepth(root->right);
    else if (root->left)
      _min = 1 + minDepth(root->left);
    else
      _min = 1;

    return _min;
  }
};