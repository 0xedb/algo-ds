class Solution {
public:
    void gen_subset(int, vector<int>&, vector<int>, vector<vector<int>>&);
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        gen_subset(0, nums, vector<int>{}, ans);
        return ans;
    }
};

void Solution::gen_subset(int ind, vector<int>& nums, vector<int> cur, vector<vector<int>>& ans) {
    ans.push_back(cur);
    
    for(int i = ind; i < nums.size(); ++i) {
        cur.push_back(nums[i]);
        gen_subset(i + 1, nums, cur, ans);
        cur.pop_back();
    }
}
