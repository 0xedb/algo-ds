class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int, int> seen;
        
        for(auto i : arr) 
            ++seen[i];
      
        sort(arr.begin(), arr.end(), [&](auto a, auto b) {
            if(seen[a] != seen[b]) 
                return seen[a] < seen[b];
            
            return a < b;
        });
         
        
        return unordered_set(arr.begin() + k, arr.end()).size();
    }
};
