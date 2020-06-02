class NumArray {
    vector<int> mem;
public:
    NumArray(vector<int>& nums) { 
        for(int i = 1; i < nums.size(); ++i) 
            nums[i] += nums[i - 1];
        
        nums.insert(nums.begin(), 0);
        mem = nums;
    }
    
    int sumRange(int i, int j) {
        return mem[++j] - mem[i];                
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(i,j);
 */
