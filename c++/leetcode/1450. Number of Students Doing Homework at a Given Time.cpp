class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        int ans {};
        
        for(int i = 0; i < startTime.size(); ++i)
            if(queryTime >= startTime[i] and queryTime <= endTime[i]) 
                ++ans;
        
        return ans;
    }
};
