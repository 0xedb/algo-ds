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
  vector<vector<int>> sums;
  vector<int> num;

public:
  void preorder(TreeNode *);
  int sumRootToLeaf(TreeNode *root)
  {
    int sum = 0;
    if (!root)
      return sum;

    if (!root->right && !root->left)
      sums.push_back(vector<int>{root->val});

    num.push_back(root->val);
    preorder(root->left);
    preorder(root->right);

    for (auto i : sums)
    {
      int sz = i.size();
      int total = 0;
      for (auto j : i)
      {
        total += j * pow(2, --sz);
      }
      sum += total;
    }

    return sum;
  }
};

void Solution::preorder(TreeNode *root)
{
  if (!root)
    return;

  if (!root->left && !root->right)
  {
    num.push_back(root->val);
    sums.push_back(num);
    num.pop_back();
  }

  num.push_back(root->val);
  if (root->left)
  {
    preorder(root->left);
  }

  if (root->right)
  {
    preorder(root->right);
  }
  num.pop_back();
}