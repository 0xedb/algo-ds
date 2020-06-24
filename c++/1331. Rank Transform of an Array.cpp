class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        unordered_map<int, int> seen;
        auto dupe(arr);
        sort(dupe.begin(), dupe.end());
        
        int k = 0;
        for(auto i : dupe) 
            if(seen.find(i) == seen.end())
                seen[i] = ++k;
        
        for(int i = 0; i < arr.size(); ++i) 
            arr[i] = seen[arr[i]];
            
            
        return arr;
    }
}; 
