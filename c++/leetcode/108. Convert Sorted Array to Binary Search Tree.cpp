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
  TreeNode *sortedArrayToBST(vector<int> &nums)
  {
    if (nums.empty())
      return nullptr;

    auto begin = nums.begin();
    auto end = nums.end();
    auto mid = nums.size() / 2;

    auto root = new TreeNode(nums[mid]);

    if (nums.size() == 1)
      return root;

    vector<int> left(begin, begin + mid);
    vector<int> right(vector<int>(begin + (mid + 1), end));

    root->left = sortedArrayToBST(left);
    root->right = sortedArrayToBST(right);

    return root;
  }
};