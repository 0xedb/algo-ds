class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int first_xor {}, first {}, second {};
        
        for(const auto& i : nums) first_xor ^= i;
        const int last_bit = (first_xor & (first_xor - 1)) ^ first_xor;
        
        for(const auto& i : nums) {
            if(i & last_bit) first ^= i;
            else second ^= i;
        }
        
        
        return {first, second};        
    }
}; 
