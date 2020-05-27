class Solution {
public:
    bool possibleBipartition(int N, vector<vector<int>>& dislikes) {
        if(dislikes.empty()) return true;
        
        ++N;
        vector<vector<int>> adj(N);
        vector<int> color(N, 0);
        
        function<bool(int, int)> dfs = [&](int num, int col) {
            if(color[num])
                return color[num] == col;
            
            color[num] = col;
            
            for(auto nxt : adj[num]) 
                if(!dfs(nxt, -col))
                    return false;
            
            return true;            
        };
        
        for(const auto& i : dislikes) {
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);            
        } 
        
        for(int i = 1; i < N; ++i) {
            if(!color[i] && !dfs(i, 1))
                return false;
        }
         
        
        return true;
    }
};
