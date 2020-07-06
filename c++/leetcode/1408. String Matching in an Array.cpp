class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        unordered_set<string> ans; 
        
        if(words.size() == 1) return {};
        
        for(int i = 0; i < words.size(); ++i) { 
            swap(words[0], words[i]);
            
            for(int j = 1; j < words.size(); ++j) {
                if(words[j].find(words[0]) != string::npos)
                    ans.insert(words[0]);
            }
        }
            
        return vector<string>(ans.begin(), ans.end());
    }
};
