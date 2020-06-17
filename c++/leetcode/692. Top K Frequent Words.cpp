class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> seen;
        
        for(const auto i : words)
            ++seen[i];
        
        const auto comp = [&](string a, string b) {
            if(seen[a] == seen[b]) 
                return a > b;
            
            return seen[a] < seen[b];
        };
        
        priority_queue<string, vector<string>, decltype(comp)> pq(comp);
        
        for(auto i : seen)
            pq.push(i.first);
        
        vector<string> ans;
        
        while(k) {
            ans.push_back(pq.top());
            pq.pop();
            --k;
        }
        
        return ans;
    }
};
