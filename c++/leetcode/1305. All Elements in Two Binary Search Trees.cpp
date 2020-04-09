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
public:
    void inorder(TreeNode* root, vector<int>&);
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> first;
        vector<int> second;
        vector<int> ans;
        
        inorder(root1, first);
        inorder(root2, second);
        
        int i = 0; 
        int j = 0;
        
        while(i < first.size() || j < second.size()) { 
            if(i < first.size() && j < second.size()) {
                if(first[i] <= second[j]) ans.push_back(first[i++]);
                else ans.push_back(second[j++]); 
                
            } else {
                if(i < first.size())
                    ans.push_back(first[i++]);
                else
                    ans.push_back(second[j++]);
            }
        }
        
        return ans;
        
    }
};


void Solution::inorder(TreeNode* root, vector<int>& stk) {
    if(!root) return;
    
    inorder(root -> left, stk);
    stk.push_back(root -> val); 
    inorder(root -> right, stk);
}