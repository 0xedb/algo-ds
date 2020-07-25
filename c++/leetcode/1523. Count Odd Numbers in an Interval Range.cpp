class Solution {
public:
    int countOdds(int low, int high) {
        int count {};
        
        for(int i = low; i <= high; ++i) 
            count += i % 2 == 0 ? 0 : 1;
        
        return count;
    }
};
