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
  bool isCompleteTree(TreeNode *root)
  {
    queue<TreeNode *> q;
    q.emplace(root);

    bool found_null = false;

    while (!q.empty())
    {
      const int sz = q.size();

      for (int i = 0; i < sz; ++i)
      {
        const auto front = q.front();

        if (found_null && front)
          return false;

        if (front)
        {
          q.emplace(front->left);
          q.emplace(front->right);
        }

        else
          found_null = true;

        q.pop();
      }
    }

    return true;
  }
};