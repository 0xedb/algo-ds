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
  vector<vector<int>> zigzagLevelOrder(TreeNode *root)
  {
    vector<vector<int>> ans;

    if (!root)
      return ans;

    bool alt{};
    queue<TreeNode *> dq;
    dq.push(root);

    while (dq.size())
    {
      vector<int> vec;
      const int sz = dq.size();

      for (int i = 0; i < sz; ++i)
      {
        auto front = dq.front();
        vec.push_back(front->val);

        if (front->left)
          dq.push(front->left);

        if (front->right)
          dq.push(front->right);

        dq.pop();
      }

      if (alt)
        reverse(vec.begin(), vec.end());

      alt = !alt;
      ans.push_back(vec);
    }

    return ans;
  }
};