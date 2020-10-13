class Solution {
public:
    vector<int> arraysIntersection(vector<int>& arr1, vector<int>& arr2, vector<int>& arr3) {
        vector<int> ans;
        unordered_set<int> first(arr1.begin(), arr1.end());
        unordered_set<int> second(arr2.begin(), arr2.end());
        unordered_set<int> third(arr3.begin(), arr3.end());
        
        for(const auto& i : arr1) 
            if(first.find(i) != first.end() && second.find(i) != second.end() &&
              third.find(i) != third.end())
                ans.push_back(i);
        
        sort(ans.begin(), ans.end());      
        
        return ans;
    }
};
