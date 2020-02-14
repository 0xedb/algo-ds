/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution { 
    vector<int> array;
public:
    vector<int> preorderTraversal(TreeNode* root) { 
        if(root == nullptr) {
            return array;
        }
       
        array.push_back(root -> val);
        preorderTraversal(root -> left);
        preorderTraversal(root -> right);   
         return array;
    }
};