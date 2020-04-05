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
  vector<vector<int>> levelOrderBottom(TreeNode *root)
  {
    vector<vector<int>> result;
    if (!root)
      return result;
    queue<TreeNode *> visited;
    visited.push(root);
    int size = 1;

    // pop all from stack add to result
    // push popped if children to stack
    while (1)
    {
      vector<int> temp;
      int added = 0;
      while (size)
      {
        TreeNode *removed = visited.front();
        visited.pop();
        temp.push_back(removed->val);
        if (removed->left)
        {
          visited.push(removed->left);
          added++;
        }
        if (removed->right)
        {
          visited.push(removed->right);
          added++;
        }
        size--;
      }
      result.push_back(temp);
      temp.clear();
      size = added;
      added = 0;
      if (size == 0)
        break;
    }
    reverse(result.begin(), result.end());
    return result;
  }
};