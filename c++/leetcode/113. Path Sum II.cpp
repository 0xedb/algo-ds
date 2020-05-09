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
    void p_sum(TreeNode*, int, int, vector<vector<int>>&, vector<int>);
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<vector<int>> ans;        
        vector<int> sums;
        
        p_sum(root, sum, 0, ans, sums);
        
        return ans;
    }
};

void Solution::p_sum(TreeNode* root, int target, int sum, vector<vector<int>>& ans, vector<int> sums) {
    if(!root) return;
    
    if(!root -> left && !root -> right) {
        if((sum + root -> val) == target) {
            sums.push_back(root -> val);
            ans.push_back(sums);
            sums.pop_back();
            return;
        }
    }
    
    sum += root -> val;
    sums.push_back(root -> val);
    
    p_sum(root -> left, target, sum, ans, sums);
    p_sum(root -> right, target, sum, ans, sums);
}

