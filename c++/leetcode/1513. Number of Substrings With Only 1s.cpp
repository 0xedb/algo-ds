class Solution {
public:
    int numSub(string s) {
        int res {}, count {}, mod = 1e9 + 7;
        
        for(const auto& i : s) {
            count = i == '1' ? count + 1 : 0;
            res = (res + count) % mod;
        }
        
        
        return res;
    }
};
 
