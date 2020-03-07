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
  TreeNode *insertIntoBST(TreeNode *root, int val)
  {
    TreeNode *cur = root;

    while (cur)
    {
      if (val > cur->val)
      {
        if (cur->right)
          cur = cur->right;
        else
        {
          cur->right = new TreeNode(val);
          return root;
        }
      }

      if (val < cur->val)
      {
        if (cur->left)
          cur = cur->left;
        else
        {
          cur->left = new TreeNode(val);
          return root;
        }
      }
    }

    return root;
  }
};



// about 40% improvement in runtime

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
  TreeNode *insertIntoBST(TreeNode *root, int val)
  {
    TreeNode *cur = root;

    while (cur)
    {
      if (val > cur->val)
      {
        if (cur->right)
        {
          cur = cur->right;
          continue;
        }
        cur->right = new TreeNode(val);
        return root;
      }

      if (val < cur->val)
      {
        if (cur->left)
        {
          cur = cur->left;
          continue;
        }

        cur->left = new TreeNode(val);
        return root;
      }
    }

    return root;
  }
};