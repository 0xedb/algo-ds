class Solution {
public:
    int arrangeCoins(int n) {
        int full {};
        long total {};
        
        for(int i = 1; i <= n; ++i) {
            if((total + i) > n) return full;         
            
            total += i;
            ++full;
        }
        
        return full;
    }
};
