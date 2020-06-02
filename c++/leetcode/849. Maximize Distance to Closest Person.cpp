class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int ans {};
        int prev = -1;
        const int sz = seats.size();
        
        for(int i = 0; i < sz; ++i) {
            if(seats[i] == 1) {
                ans = prev < 0 ? i : max(ans, (i - prev) / 2);
                prev = i;
            }
                
        }
        
        ans = max(ans, sz - prev - 1);
        return ans;
    }
};

 
