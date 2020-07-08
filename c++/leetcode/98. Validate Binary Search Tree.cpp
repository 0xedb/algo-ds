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
public:
    bool v(TreeNode*, TreeNode*, TreeNode*);
    bool isValidBST(TreeNode* root) { 
        return v(root, nullptr, nullptr);        
    }
};

bool Solution::v(TreeNode* root, TreeNode* _min, TreeNode* _max) {
    if(!root) return true;
    
    if(_min && root -> val <= _min -> val || _max && root -> val >= _max -> val)
        return false;
    
    return v(root -> left, _min, root) && v(root -> right, root, _max);
} 
 
