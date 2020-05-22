class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string S) {
        int ans = 1, line = 0;
        
        for(auto i : S) {
            auto w = widths[i - 'a'];
            ans = line + w > 100 ? ans + 1 : ans;
            line = line + w > 100 ? w : line + w;
        }
        
        return {ans, line};
    }
};
 
