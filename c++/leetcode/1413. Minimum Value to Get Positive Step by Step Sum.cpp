class Solution {
public:
    int minStartValue(vector<int>& nums) {
        auto total = 0, min_total = 0;
        
        for(auto i : nums) {
            total += i;
            min_total = min(min_total, total);
        }
        
        return 1 - min_total;
    }
}; 
