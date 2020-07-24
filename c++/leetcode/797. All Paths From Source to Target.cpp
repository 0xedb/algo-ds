class Solution {
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> ans;
        vector<int> paths; 
        const int source {}, dest = graph.size() - 1;       
        
        std::function<void(int)> dfs = [&](int vert) {
            paths.push_back(vert);   
            if(vert == dest) ans.push_back(paths);
            else for(const auto& i : graph[vert]) dfs(i);
            
            paths.pop_back();  
        };
        
        dfs(source);
        return ans;        
    }
};
