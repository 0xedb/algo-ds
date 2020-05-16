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
  void good(TreeNode *, int, int &);
  int goodNodes(TreeNode *root)
  {
    int g = 0;
    good(root, root->val, g);
    return g;
  }
};

void Solution::good(TreeNode *root, int _max, int &g)
{
  if (!root)
    return;

  if (root->val >= _max)
    ++g;

  _max = max(root->val, _max);

  good(root->left, _max, g);
  good(root->right, _max, g);
}