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
  int lng(TreeNode *, int &);
  int longestUnivaluePath(TreeNode *root)
  {
    int ans = 0;
    lng(root, ans);
    return ans;
  }
};

int Solution::lng(TreeNode *root, int &ans)
{
  if (!root)
    return 0;

  auto left = lng(root->left, ans);
  auto right = lng(root->right, ans);

  int a_left = 0, a_right = 0;

  if (root->left && root->left->val == root->val)
    a_left += left + 1;
  if (root->right && root->right->val == root->val)
    a_right += right + 1;

  ans = max(ans, a_left + a_right);

  return max(a_left, a_right);
}