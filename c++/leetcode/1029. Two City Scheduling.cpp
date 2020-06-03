class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int first = {};
        int second =  {};
        
        sort(costs.begin(), costs.end(), [](const vector<int>& a, decltype(a) b) {
            return (a[0] - a[1]) < (b[0] - b[1]);
        });
        
        for(int i = 0, j = costs.size() - 1; i < j; ++i, --j) {
            first += costs[i][0];
            second += costs[j][1];
        }
        
        return first + second;
    }
};
