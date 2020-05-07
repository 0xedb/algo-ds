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
  int deepestLeavesSum(TreeNode *root)
  {
    queue<TreeNode *> q;
    q.emplace(root);

    int ans = 0;

    while (!q.empty())
    {
      const auto sz = q.size();
      ans = 0;

      for (int i = 0; i < sz; ++i)
      {
        auto item = q.front();

        if (item->left)
          q.emplace(item->left);
        if (item->right)
          q.emplace(item->right);
        ans += item->val;
        q.pop();
      }
    }

    return ans;
  }
};