class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& nums) {
        auto dupe(nums);
        sort(dupe.begin(), dupe.end(), std::greater<int>());
        unordered_map<int, string> seen;
        
        int pos {}; 
        for(const auto& i : dupe) 
            seen[i] = to_string(++pos);      
         
        vector<string> award {"Gold Medal", "Silver Medal", "Bronze Medal"};
        
        for(int i = 0; i < 3 && i < nums.size(); ++i)  
            seen[dupe[i]] = award[i];                        

        
        vector<string> ans(nums.size());
        
        for(int i = 0; i < nums.size(); ++i)
            ans[i] = seen[nums[i]];
        
        
        return ans;
    }
};
