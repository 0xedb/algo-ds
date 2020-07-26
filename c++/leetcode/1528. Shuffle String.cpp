class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        const auto sz = s.size();
        vector<char> mapping(sz);        
        
        for(int i = 0; i < sz; ++i)
            mapping[indices[i]] = s[i];
         
        return string(mapping.begin(), mapping.end());            
    }
};
 
