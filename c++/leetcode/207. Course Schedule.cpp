class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> edges(numCourses);
        vector<int> degree(numCourses, 0), bfs;
        
        for(const auto& i : prerequisites) 
            edges[i[1]].push_back(i[0]), ++degree[i[0]];
        
        for(int i = 0; i < numCourses; ++i)
            if(!degree[i])
                bfs.push_back(i);
        
        for(int i = 0; i < bfs.size(); ++i)
            for(int j : edges[bfs[i]])
                if(!(--degree[j]))
                    bfs.push_back(j);
        
        
        
        return bfs.size() == numCourses;
    }
}; 
