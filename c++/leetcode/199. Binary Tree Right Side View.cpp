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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans; 
        
        if(!root) return ans;
        
        queue<TreeNode*> q;
        q.emplace(root); 
        
        
        while(!q.empty()) {
            const auto sz = q.size();
            
            for(int i = 0; i < sz; ++i) {
                const auto front = q.front();
                
                if(front -> left)
                    q.push(front -> left);
                
                if(front -> right)
                    q.push(front -> right);
                
                if(i == sz - 1)
                    ans.push_back(q.front() -> val);
                
                q.pop();
            }
            
        }
        
        return ans;
    }
};

