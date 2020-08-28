class Solution {
public:
    string generateTheString(int n) {
        if(n == 1) return "a";
        if(n == 2) return "ab";
        
        
        string ans {};
        
        // even
        if(n % 2 == 0) {
            for(int i = 0; i < n - 1; ++i)
                ans += "a";
            
            return ans + "b";
        } 
        
        for(int i = 0; i < n; ++i)
            ans += "a";
        
        return ans;
    }
};
