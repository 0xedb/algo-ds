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
  void preorder(TreeNode *, vector<string> &, string);
  vector<string> binaryTreePaths(TreeNode *root)
  {
    vector<string> ans;
    if (!root)
      return ans;

    string leaf = to_string(root->val);
    preorder(root, ans, leaf);

    return ans;
  }
};

void Solution::preorder(TreeNode *root, vector<string> &ans, string leaf)
{
  if (!root->left && !root->right)
    ans.push_back(leaf);

  if (root->left)
    preorder(root->left, ans, leaf + "->" + to_string(root->left->val));
  if (root->right)
    preorder(root->right, ans, leaf + "->" + to_string(root->right->val));
}