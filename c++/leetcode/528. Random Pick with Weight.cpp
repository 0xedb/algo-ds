class Solution { 
    vector<int> nums;
public:
    Solution(vector<int>& w) {
        for(auto i : w) 
            nums.push_back(nums.empty() ? i : i + nums.back());
    }
    
    int pickIndex() {
        int rnd = (rand() % nums.back()) + 1;
        
        const auto search = [&](int val) {
            int start = 0;
            int end = nums.size() - 1;
            
            while(start < end) {
                auto mid = start + ((end - start) / 2);
                
                nums[mid] < val ? start = ++mid : end = mid;
            }
            
            return start;            
        };
        
        return search(rnd);
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(w);
 * int param_1 = obj->pickIndex();
 */
