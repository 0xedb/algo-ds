class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count = 0;
        
        unordered_map<int, int> seen;
        
        for(const auto& i : nums) 
            count += seen[i]++;
        
        return count;        
    }
};
