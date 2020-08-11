class Solution {
public:
    int hIndex(vector<int>& citations) {
        int ans {};
        if(citations.empty()) return ans;
        int n = citations.size();
        
        vector<int> hash(n + 1);
        
        for(int i = 0; i < n; ++i) {
            if(citations[i] >= n)
                ++hash[n];
            
            else
                ++hash[citations[i]];
        }
        
        int paper = 0;
        
        for(int i = n; i >= 0; --i) {
            paper += hash[i];
            
            if(paper >= i)
                return i;
        }
        
        return ans;
    }
};

 
