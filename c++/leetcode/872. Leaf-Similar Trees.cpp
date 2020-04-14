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
  void similar(TreeNode *, string &);
  bool leafSimilar(TreeNode *root1, TreeNode *root2)
  {

    string first = "";
    string second = "";

    similar(root1, first);
    similar(root2, second);

    return first == second;
  }
};

void Solution::similar(TreeNode *root, string &str)
{
  if (!root)
    return;

  if (!root->left && !root->right)
    str += root->val;

  similar(root->left, str);
  similar(root->right, str);
}