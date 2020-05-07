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
  void solve(TreeNode *, int &);
  TreeNode *convertBST(TreeNode *root)
  {
    int sum = 0;
    solve(root, sum);
    return root;
  }
};

void Solution::solve(TreeNode *root, int &sum)
{
  if (!root)
    return;

  solve(root->right, sum);

  root->val += sum;
  sum = root->val;

  solve(root->left, sum);
}