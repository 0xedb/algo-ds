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
  bool has(TreeNode *, int &, unordered_set<int> &);
  bool findTarget(TreeNode *root, int k)
  {
    unordered_set<int> seen;
    return has(root, k, seen);
  }
};

bool Solution::has(TreeNode *root, int &k, unordered_set<int> &seen)
{
  if (!root)
    return false;

  if (seen.find(k - root->val) != seen.end())
    return true;

  seen.insert(root->val);
  return has(root->left, k, seen) || has(root->right, k, seen);
}