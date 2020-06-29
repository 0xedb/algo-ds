class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> paths(n, vector<int>(m));
        
        for(int i = 0; i < m; ++i)
            paths[n - 1][i] = 1;
        
        for(int i = 0; i < n; ++i) 
            paths[i][m - 1] = 1;
        
        for(int i = n - 2; i >= 0; --i) {
            for(int j = m - 2; j >= 0; --j)  
                paths[i][j] = paths[i][j + 1] + paths[i + 1][j];

        }
        
        return paths[0][0];
    }
};
