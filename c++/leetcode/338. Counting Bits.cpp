class Solution {
public:  
    vector<int> countBits(int num) {
        vector<int> ans;
        
        const auto count_bits = [](int num) {
            int count{};
            
            while(num && ++count) 
                num &= num - 1;
            
            return count;
        };
        
        for(int i = 0; i <= num; ++i) 
            ans.push_back(count_bits(i));
        
        return ans;
    }
}; 
