class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        constexpr auto FACTOR = 1001;
        unordered_map<int, int> seen;
        
        int i = -1;
        while(++i < arr2.size())
            seen[arr2[i]] = i;
        
        sort(arr1.begin(), arr1.end(), [&](int a, int b) {
            if(seen.find(a) == seen.end())
                seen[a] = FACTOR + a;
            
            if(seen.find(b) == seen.end())
                seen[b] = FACTOR + b;
            
            return seen[a] < seen[b];
        });
        
        
        return arr1;
    }
};
