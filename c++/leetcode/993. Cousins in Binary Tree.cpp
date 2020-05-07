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
  bool isCousins(TreeNode *root, int x, int y)
  {
    queue<pair<TreeNode *, int>> q;
    q.emplace(root, 0);
    int parent = 0;

    while (!q.empty())
    {
      const int sz = q.size();

      for (int i = 0; i < sz; ++i)
      {
        auto node = q.front().first;
        auto val = q.front().second;

        if (node->val == x || node->val == y)
        {
          if (parent)
          {
            if (parent == val)
              return false;
            return true;
          }

          parent = val;
        }

        q.pop();
        if (node->left)
          q.emplace(node->left, node->val);
        if (node->right)
          q.emplace(node->right, node->val);
      }

      if (parent)
        return false;
    }

    return true;
  }
};