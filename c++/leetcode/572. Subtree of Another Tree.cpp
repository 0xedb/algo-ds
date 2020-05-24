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
    bool isSameTree(TreeNode*, TreeNode*);
    bool isSubtree(TreeNode* s, TreeNode* t) {
        if(!s) return false;
        if(isSameTree(s, t)) return true;
        
        return isSubtree(s -> left, t) || isSubtree(s -> right, t);
    }
};


bool Solution::isSameTree(TreeNode* s, TreeNode* t) {
    if(!s or !t) return s == t;
    
    if(s -> val != t -> val) return false;
    
    return isSameTree(s -> left, t -> left) && isSameTree(s -> right, t -> right);    
}
 
