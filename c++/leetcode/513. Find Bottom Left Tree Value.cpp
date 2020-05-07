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
  int findBottomLeftValue(TreeNode *root)
  {
    queue<TreeNode *> q;
    q.emplace(root);

    int ans{};

    while (!q.empty())
    {
      const int sz = q.size();

      for (int i = 0; i < sz; ++i)
      {
        const auto front = q.front();

        if (front->right)
          q.emplace(front->right);
        if (front->left)
          q.emplace(front->left);
        ans = front->val;
        q.pop();
      }
    }

    return ans;
  }
};