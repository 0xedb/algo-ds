class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int first = 0;
        int second = 0;
        
        const auto find_two = [&](int& a) {
            if(a > first) 
                second = exchange(first, a);
            else
                second = max(second, a);
        };
        
        
        for_each(nums.begin(), nums.end(), find_two);
        
        
        return --first * --second;
    }
}; 
