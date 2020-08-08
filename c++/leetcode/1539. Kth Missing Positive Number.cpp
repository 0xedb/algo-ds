class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int start = 1;
        int ans = arr[0] + 1;
        unordered_set<int> seen(arr.begin(), arr.end());
        
        while(k != 0) {
            if(seen.find(start) == seen.end()) --k, ans = start;
            
            ++start;
        }         
        
        return ans;
    }
};
