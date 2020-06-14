class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int K) {
        vector<vector<pair<int, int>>> adj(n);
        
        for(const auto& i : flights)
            adj[i[0]].push_back({i[1], i[2]});
        
        priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> pq;
        pq.push({0, src, K + 1});
        
        while(pq.size()) {
            auto top = pq.top();
            pq.pop();
            
            auto d = top[0];
            auto u = top[1];
            auto e = top[2];
            
            if(u == dst) return d;
            
            if(e) {
                for(const auto& i : adj[u])
                    pq.push({d + i.second, i.first, e - 1});
            }
        }
        
        return -1;
    }
};
