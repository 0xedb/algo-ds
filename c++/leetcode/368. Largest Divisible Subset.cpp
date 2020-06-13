class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
       const int sz = nums.size();
        
        if(sz <= 1) return nums;
        
        sort(nums.begin(), nums.end());        
        vector<vector<int>> dp(sz, vector<int>{});
        
        int max_idx = 0;
        int max_len = 1;
        
        for(int i = sz - 1; i >= 0; --i) {
            dp[i].push_back(nums[i]);
            
            int j = i + 1;
            int _max = 0;
            int _max_idx = i;
            
            while(j < sz) {
                if(nums[j] % nums[i] == 0 && dp[j].size() > _max) {
                    _max = dp[j].size();
                    _max_idx = j;
                }
                
                ++j;
            }
            
            if(_max_idx != i) { 
                dp[i].insert(dp[i].end(), dp[_max_idx].begin(), dp[_max_idx].end());
                if(_max + 1 > max_len) {
                    max_len = _max + 1;
                    max_idx = i;
                }
            }
        } 
        
        return dp[max_idx];
    }
};
