class Solution {
public:
    string reverseWords(string s) {
        string ans {}; 
        stack<string> stk;
        
        string temp {};
        for(const auto& i : s) {
            if(i == ' ' && !temp.empty())   
                stk.push(temp), temp = "";
            
            else if (i != ' ')
                temp += i;
        }
        
        if(!temp.empty()) stk.push(temp);
        
        while(stk.size()) {
            ans += (stk.top());
            stk.pop();
            
            if(stk.size()) ans += " ";
        }
        
        return ans;
    }
};
 
