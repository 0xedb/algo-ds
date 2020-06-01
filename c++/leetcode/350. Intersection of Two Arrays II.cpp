class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, queue<int>> seen(nums1.size());
         
        for(int i = 0; i < nums1.size(); ++i)
            seen[nums1[i]].push(i);
        
        vector<int> ans;
        
        for(auto i : nums2) {
            if(seen.find(i) != seen.end() && !seen[i].empty()) {
                ans.push_back(i);
                seen[i].pop();
            }
        }
        
        
        return ans;
    }
};
