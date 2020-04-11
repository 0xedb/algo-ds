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
  int diameter(TreeNode *, int &);
  int diameterOfBinaryTree(TreeNode *root)
  {
    int ans = 0;
    diameter(root, ans);
    return ans;
  }
};

int Solution::diameter(TreeNode *root, int &ans)
{
  if (!root)
    return 0;

  int left = diameter(root->left, ans);
  int right = diameter(root->right, ans);

  ans = max(ans, left + right);
  return max(left, right) + 1;
}