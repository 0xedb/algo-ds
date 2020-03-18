/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class BSTIterator
{
  vector<int> sorted;
  int pos;

public:
  BSTIterator(TreeNode *root)
  {
    pos = 0;
    inorder(root);
  }

  /** @return the next smallest number */
  int next()
  {
    return sorted.at(pos++);
  }

  /** @return whether we have a next smallest number */
  bool hasNext()
  {
    return pos < sorted.size();
  }

  void inorder(TreeNode *);
};

void BSTIterator::inorder(TreeNode *root)
{
  if (!root)
    return;
  inorder(root->left);
  sorted.push_back(root->val);
  inorder(root->right);
}

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */