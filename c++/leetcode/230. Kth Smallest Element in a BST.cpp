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
  vector<int> arr;

public:
  vector<int> smallest(TreeNode *);
  int kthSmallest(TreeNode *root, int k)
  {
    return smallest(root).at(k - 1);
  }
};

vector<int> Solution::smallest(TreeNode *root)
{
  if (!root)
    return arr;
  smallest(root->left);
  arr.push_back(root->val);
  smallest(root->right);
  return arr;
}