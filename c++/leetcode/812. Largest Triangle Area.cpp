class Solution {
public:
    double largestTriangleArea(vector<vector<int>>& points) {
        double ans {};
        const int sz = points.size();
        
        const auto area = [](decltype(points[0]) a, decltype(a) b, decltype(a) c) {
            return 0.5 * abs(a[0] * b[1] + b[0] * c[1] + c[0] * a[1] - a[1] * b[0] - b[1] * c[0] - c[1] * a[0]);
        };
        
        for(int i = 0; i < sz; ++i) 
            for(int j = i + 1; j < sz; ++j)
                for(int k = j + 1; k < sz; ++k)
                    ans = max(ans, area(points[i], points[j], points[k]));
        
        return ans;
    }
};
