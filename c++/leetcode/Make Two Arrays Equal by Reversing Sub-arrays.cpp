class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        int a = target.size();
        int b = arr.size();
        
        if(a != b) return false;        
        
        sort(target.begin(), target.end());
        sort(arr.begin(), arr.end());
        
        return target == arr;
    }
};
