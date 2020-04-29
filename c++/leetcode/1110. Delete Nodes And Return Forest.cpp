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
  TreeNode *del(TreeNode *, vector<TreeNode *> &, const unordered_set<int> &, const bool &);
  vector<TreeNode *> delNodes(TreeNode *root, vector<int> &to_delete)
  {
    vector<TreeNode *> heads;
    unordered_set<int> seen{to_delete.begin(), to_delete.end()};

    del(root, heads, seen, true);

    return heads;
  }
};

TreeNode *Solution::del(TreeNode *root, vector<TreeNode *> &heads, const unordered_set<int> &seen, const bool &is_root)
{
  if (!root)
    return nullptr;

  auto deleted = seen.count(root->val);

  if (is_root && !deleted)
    heads.push_back(root);

  root->left = del(root->left, heads, seen, deleted);
  root->right = del(root->right, heads, seen, deleted);

  return deleted ? nullptr : root;
}