class Solution {
public:
    void sortColors(vector<int>& nums) {
        const int sz = nums.size();
        
        int zero = 0, two = sz - 1, i = 0;
        
        while(i <= two && zero < two) {
            if(nums[i] == 0) {
                swap(nums[i], nums[zero]);
                ++zero;
                ++i;
            } else if(nums[i] == 2) {
                swap(nums[i], nums[two]);
                --two;
            } else
                ++i;
        }
    }
};
