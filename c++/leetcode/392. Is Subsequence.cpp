class Solution {
public:
    bool isSubsequence(string s, string t) {
        int j = 0;
        for(auto i : s) {
            while(j < t.size() && t[j] != i) 
                ++j;
            
            if(j == t.size()) return false;
            
            ++j;
        }
        
        return true;
    }
};
