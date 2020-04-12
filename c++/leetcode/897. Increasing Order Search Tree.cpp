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
  TreeNode *cur;

public:
  void inorder(TreeNode *);
  TreeNode *increasingBST(TreeNode *root)
  {
    TreeNode *ans = new TreeNode(0);
    cur = ans;
    inorder(root);
    return ans->right;
  }
};

void Solution::inorder(TreeNode *root)
{
  if (!root)
    return;

  inorder(root->left);
  root->left = nullptr;
  cur->right = root;
  cur = root;
  inorder(root->right);
}