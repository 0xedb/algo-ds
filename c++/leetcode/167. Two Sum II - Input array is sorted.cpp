class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) { 
        vector<int> ans;
        int start = 0;
        int end = numbers.size() - 1;
        
        while(start < end) {
            const int t = numbers[start] + numbers[end];
            
            if(t > target)
                --end;
            else if(t < target)
                ++start;
            else
                return {++start, ++end};
        }
             
        return ans;        
    }
};
