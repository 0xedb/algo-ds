class Solution {
public:
    double average(vector<int>& salary) {
        double total {};
        
        int _min = salary[0];
        int _max = salary[0];
        
        for(auto i : salary) {
            if(i < _min) _min = i;
            if(i > _max) _max = i;
            
            total += i;
        }
        
        total -= _min;
        total -= _max;
        
        return total / (salary.size() - 2);
    }
};
