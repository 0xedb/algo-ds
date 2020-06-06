class Solution {
public: 
    vector<int> searchRange(vector<int>& nums, int target) {
        
        function<int()> search_l = [&] {
            int ind = -1;
            
            int start = 0;
            int end = nums.size() - 1;
            
            while(start <= end) {
                auto mid = start + ((end - start) / 2); 
                
                if(nums[mid] == target)
                    ind = mid;
                
                if(nums[mid] >= target) 
                    end = --mid;
                else 
                    start = ++mid;
            }
            
            return ind;
        };
        
        function<int()> search_h = [&] {
            int ind = -1;
            
            int start = 0;
            int end = nums.size() - 1;
            
            while(start <= end) {
                auto mid = start + ((end - start) / 2); 
                
                if(nums[mid] == target)
                    ind = mid;
                
                if(nums[mid] > target) 
                    end = --mid;
                else 
                    start = ++mid;
            }
            
            return ind;              
        };
        
        int low = search_l();
        int high = search_h();
        
        return {low, high};        
    }
};
 
