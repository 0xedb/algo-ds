class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int, int> count, seen;
        int degree {}, ans {};
        
        for(int i = 0; i < nums.size(); ++i) {
            if(seen.count(nums[i]) == 0) seen[nums[i]] = i;
            
            if(++count[nums[i]] > degree) {
                degree = count[nums[i]];    
                ans = i - seen[nums[i]] + 1;
            } else if(count[nums[i]] == degree)
                ans = min(ans, i - seen[nums[i]] + 1);
        }
        
        
        return ans;        
    }
};

