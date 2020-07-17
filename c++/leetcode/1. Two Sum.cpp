class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen;
        
        int first {}, second {};
        
        for(int i = 0; i < nums.size(); ++i) {
            if(seen.find(target - nums[i]) != seen.end()) {
                first = i, second = seen[target - nums[i]];
                break;
            }
            
            seen[nums[i]] = i;        
        }
        
        return {first, second};
    }
};
