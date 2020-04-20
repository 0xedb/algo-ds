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
  TreeNode *bst(vector<int> &, int, int &);
  TreeNode *bstFromPreorder(vector<int> &preorder)
  {
    if (!preorder.size())
      return nullptr;
    auto ind = 0;
    return bst(preorder, INT_MAX, ind);
  }
};

TreeNode *Solution::bst(vector<int> &preorder, int upper, int &ind)
{
  if (ind == preorder.size() || preorder[ind] > upper)
    return nullptr;

  auto root = new TreeNode(preorder[ind]);
  ++ind;
  root->left = bst(preorder, root->val, ind);
  root->right = bst(preorder, upper, ind);

  return root;
}