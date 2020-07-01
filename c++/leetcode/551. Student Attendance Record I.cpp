class Solution {
public:
    bool checkRecord(string s) {
        int cont {0};
        
        unordered_map<char, int> seen;
        seen.insert({s[0], 1});
        
        for(int i = 1; i < s.size(); ++i) {
            ++seen[s[i]];
            
            if(seen['A'] > 1) return false;
        }
        
        for(int i = 0; i < s.size(); ++i) {
            int c = 0;
            
            while(s[i] == 'L')
                ++i, ++c;
                
            if(s[i] != 'L') {
                cont = max(c, cont);
                c = 0;
            } 
            
            if(cont > 2) return false;
            
        }
        
        return true;
    }
};
