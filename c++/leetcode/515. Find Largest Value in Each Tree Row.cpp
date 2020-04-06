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
  vector<int> largestValues(TreeNode *root)
  {
    vector<int> result;
    if (!root)
      return result;
    queue<TreeNode *> seen;
    seen.push(root);
    int size = 1;
    int max = 0;

    while (1)
    {
      int added = 0;
      max = seen.front()->val;
      while (size)
      {
        TreeNode *removed = seen.front();
        max = max >= removed->val ? max : removed->val;
        seen.pop();
        size--;

        if (removed->left)
        {
          added++;
          seen.push(removed->left);
        }

        if (removed->right)
        {
          added++;
          seen.push(removed->right);
        }
      }
      size = added;
      result.push_back(max);
      if (size == 0)
        break;
      max = seen.front()->val;
    }

    return result;
  }
};