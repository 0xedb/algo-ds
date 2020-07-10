class Solution {
public:
    string longestWord(vector<string>& words) {
        string longest {};
        
        if(!words.size()) return longest;
        
        unordered_set<string> seen(words.begin(), words.end()); 
        
        for(const auto& i : words) {
            
            for(int j = 0; j < i.size(); ++j) { 
                if(seen.find(i.substr(0, j + 1)) == seen.end())
                    break;
                
                if(j == i.size() - 1) { 
                    if(i.size() > longest.size())
                        longest = i ;
                    else if(i.size() == longest.size())
                        longest = i < longest ? i : longest; 
                }
            } 
        }
        
        
        return longest;
    }
};
