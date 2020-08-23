class Solution {
public:
    string thousandSeparator(int n) {
        if(n < 1000) return to_string(n);
        
        stack<char> stk;
        
        string ans {};
        int count {};
        
        while(n != 0) { 
            if(count == 3) stk.push('.'), count = 0;
            
            stk.push((n % 10) + '0');
            ++count;
            
            n /= 10;
        } 
         
        while(!stk.empty())  
            ans.push_back(stk.top()), stk.pop();
        
        return ans;
    }
};
