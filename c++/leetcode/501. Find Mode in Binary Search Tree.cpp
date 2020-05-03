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
class Solution {
    vector<int> ans;
    int _max = 0, count = 0, pre = 0;
    void preorder(TreeNode*);
public:
    vector<int> findMode(TreeNode* root) {
        preorder(root);
        return ans;
    }
};

void Solution::preorder(TreeNode* root) {
    if(!root) return;
    
    preorder(root -> left);
     
    count = pre == root -> val ? ++count : 1;
    
    if(count > _max) {
        ans.clear();
        ans.push_back(root -> val);
        _max = count;
    } 
    else if(count == _max) {
        ans.push_back(root -> val);
    }
    
    pre = root -> val;
    
    preorder(root -> right);
}
