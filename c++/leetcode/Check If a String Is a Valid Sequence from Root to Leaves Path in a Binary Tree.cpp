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
  bool valid(TreeNode *, vector<int> &, int);
  bool isValidSequence(TreeNode *root, vector<int> &arr)
  {
    return valid(root, arr, 0);
  }
};

bool Solution::valid(TreeNode *root, vector<int> &arr, int pos)
{
  if (!root || pos >= arr.size())
    return false;

  if (!root->left && !root->right)
  {
    if (pos == arr.size() - 1 && arr[pos] == root->val)
      return true;
    return false;
  }

  if (arr[pos] == root->val)
  {
    ++pos;
    return valid(root->left, arr, pos) || valid(root->right, arr, pos);
  }

  return false;
}