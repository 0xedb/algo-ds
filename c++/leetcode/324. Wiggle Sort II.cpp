class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        auto temp { nums };
        sort(temp.begin(), temp.end());
        
        for(int i = temp.size() - 1, j = 0, k = (i / 2) + 1; i >= 0; --i)
            nums[i] = temp[i bitand 1 ? k++ : j++]; 
    }
};
