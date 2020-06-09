class Solution {
public:
    int maxProduct(vector<int>& nums) {
        const int sz = nums.size();
        if(!sz) return 0; 
        
        auto pre_max = nums[0];
        auto pre_min = pre_max;
        auto _max = pre_max;
        int cur_max, cur_min;
        
        for(int i = 1; i < sz; ++i) {
            cur_max = max(max(pre_max * nums[i], pre_min * nums[i]), nums[i]);
            cur_min = min(min(pre_max * nums[i], pre_min * nums[i]), nums[i]);
            
            _max = max(cur_max, _max);
            pre_max = cur_max;
            pre_min = cur_min;
        }
        
        
        return _max;
    }
};
