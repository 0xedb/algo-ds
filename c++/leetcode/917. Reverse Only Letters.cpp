class Solution {
public:
    string reverseOnlyLetters(string S) { 
        int start = 0;
        int end = S.size() - 1;
        
        while(start < end) {
            if(!isalpha(S[start]))
                ++start;
            if(!isalpha(S[end]))
                --end;
            
            if(isalpha(S[start]) && isalpha(S[end])) {
                swap(S[start++], S[end--]);
            }
        }
        
        return S;
    }
};
