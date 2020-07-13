class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        vector<int> mapping(26);
        
        for(int i = 0; i < mapping.size(); ++i) 
            mapping[order[i] - 'a'] = i;
        
        for(auto& i : words) 
            for(auto& c : i)
                c = mapping[c - 'a'];
        
        return is_sorted(words.begin(), words.end());
    } 
}; 
