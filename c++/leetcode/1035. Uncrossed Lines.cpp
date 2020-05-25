class Solution {
public:
    int maxUncrossedLines(vector<int>& A, vector<int>& B) {
        const int az = A.size(), bz = B.size();     
        
        vector<vector<int>> dp(az + 1, vector<int>(bz + 1));
        
        for(int i = 0; i < az; ++i) {
            for(int j = 0; j < bz; ++j) {
                if(A[i] == B[j]) dp[i + 1][j + 1] = 1 + dp[i][j];
                else dp[i + 1][j + 1] = max(dp[i][j + 1], dp[i + 1][j]);
            }
        }
        
        
        return dp[az][bz];
    }
};
 
