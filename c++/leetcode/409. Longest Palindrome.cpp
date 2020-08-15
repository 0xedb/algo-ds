class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> seen;
        
        int ans {0};
        auto odd {false};
        
        for(const auto& i : s) 
            ++seen[i];
        
        for(const auto& i : seen) {
            const auto t = i.second;
            
            if(t % 2 == 0) ans += t;
            else ans += t - 1, odd = true;
        }
        
        return odd ? ++ans : ans;
    }
};
