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
  int tilt(TreeNode *, int &);
  int findTilt(TreeNode *root)
  {
    int sum = 0;
    tilt(root, sum);
    return sum;
  }
};

int Solution::tilt(TreeNode *root, int &sum)
{
  if (!root)
    return 0;

  auto left = tilt(root->left, sum);
  auto right = tilt(root->right, sum);
  sum += abs(left - right);

  return left + right + root->val;
}