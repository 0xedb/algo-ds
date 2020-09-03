class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        const auto sz = s.size();
        
        for(int i = 1; i <= sz / 2; ++i) 
            if(sz % i == 0 && s.substr(i) == s.substr(0, sz - i))
                return true;
        
        return false;            
    }
}; 
