/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

// iterative

class Solution
{
  vector<int> ans;
  stack<TreeNode *> stk;

public:
  vector<int> postorderTraversal(TreeNode *root)
  {
    if (root)
    {
      TreeNode *l = root->left;
      TreeNode *r = root->right;
      root = new TreeNode(root->val);
      stk.push(root);
      if (r)
        stk.push(r);
      if (l)
        stk.push(l);

      while (stk.size())
      {
        TreeNode *latest = stk.top();
        if (!latest->right && !latest->left)
        {
          ans.push_back(latest->val);
          stk.pop();
        }
        if (latest->right)
          stk.push(latest->right);
        if (latest->left)
          stk.push(latest->left);
        latest->left = nullptr;
        latest->right = nullptr;
      }
    }
    return ans;
  }
};

// recursive
// class Solution {
//     vector<int> ans;
// public:
//     vector<int> postorderTraversal(TreeNode* root) {
//         if(!root) return ans;
//         postorderTraversal(root -> left);
//         postorderTraversal(root -> right);
//         ans.push_back(root -> val);

//         return ans;
//     }
// };