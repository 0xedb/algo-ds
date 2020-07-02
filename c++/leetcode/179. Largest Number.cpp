class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> arr;
        
        for(auto i : nums)
            arr.push_back(to_string(i));
        
        sort(arr.begin(), arr.end(), [](const string& a, const string& b) {
            return a + b > b + a;            
        });
        
        string res {};
        
        for(auto i : arr) 
            res += i;
        
        while(res[0] == '0' && res.size() > 1)
            res.erase(0, 1);
    
        
        return res;                
    }
}; 
