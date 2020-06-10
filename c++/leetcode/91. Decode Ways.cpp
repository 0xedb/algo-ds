class Solution {
public:
    int numDecodings(string s) { 
        const int sz = s.size();
        
        vector<int> dp(sz + 1);
        dp[0] = 1;
        dp[1] = s[0] == '0' ? 0 : 1;
        
        for(int i = 2; i <= sz; ++i) {
            int one = stoi(s.substr(i - 1, 1));
            int two = stoi(s.substr(i - 2, 2));
            
            if(one >= 1)
                dp[i] += dp[i - 1];
            
            if(two > 9 && two < 27)
                dp[i] += dp[i - 2];
        }
        
        return dp[sz];
    }
};
