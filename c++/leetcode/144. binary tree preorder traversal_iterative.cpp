
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
  vector<int> preorderTraversal(TreeNode *root)
  {
    vector<int> array;

    if (root == nullptr)
      return array;

    stack<TreeNode *> stk;
    stk.push(root);

    while (!stk.empty())
    {
      TreeNode *removed = stk.top();
      stk.pop();
      array.push_back(removed->val);

      if (removed->right)
        stk.push(removed->right);
      if (removed->left)
        stk.push(removed->left);
    }

    return array;
  }
};
// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//  * };
//  */
// class Solution
// {
// public:
//   vector<int> preorderTraversal(TreeNode *root)
//   {
//     vector<int> array;
//     if (root == nullptr)
//       return array;

//     stack<TreeNode *> stk;
//     stk.push(root);

//     while (!stk.empty())
//     {
//       // pop
//       TreeNode *removed = stk.top();
//       stk.pop();
//       array.push_back(removed->val);

//       // push if right
//       if (removed->right)
//       {
//         stk.push(removed->right);
//         preorderTraversal(removed->right);
//       }

//       // push if left
//       if (removed->left)
//       {
//         stk.push(removed->left);
//         preorderTraversal(removed->left);
//       }
//     }

//     return array;
//   }
// };


