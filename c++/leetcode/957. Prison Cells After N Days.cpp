class Solution {
public:
    vector<int> prisonAfterNDays(vector<int>& cells, int N) {
        unordered_map<string, int> seen;
        
        for(int i = 0; i < N; ++i) {
            string temp(cells.begin(), cells.end());
            
            if(seen.find(temp) != seen.end()) {
                int len = i - seen[temp];
                int days = (N - i) % len;
                return prisonAfterNDays(cells, days);
            }
            else {
                seen.insert({temp, i});
                int prev = cells[0];
                
                for(int j = 1; j < 7; ++j){
                    int next = cells[j + 1];
                    int current = cells[j];
                    cells[j] = prev == next;
                    prev = current;
                }
                
            }
             
            cells[0] = 0;
            cells[7] = 0;
        } 
        
        return cells;        
    }
};
