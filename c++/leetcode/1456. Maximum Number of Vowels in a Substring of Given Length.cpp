class Solution {
public:
    int maxVowels(string s, int k) {
        int _max = 0;
        const int sz = s.size();
        unordered_set<char> vowels {'a', 'e', 'i', 'o', 'u'};
        
        for(int i = 0; i < k; ++i) {
            if(vowels.find(s[i]) != vowels.end())
                ++_max;
        }
        
        int start = 1;
        int end = k;
        int count = _max;
        
        while(end < sz) {
            if(vowels.find(s[start - 1]) != vowels.end()) 
                --count;
            if(vowels.find(s[end]) != vowels.end())
                ++count;
            
            _max = max(_max, count);
            ++start;
            ++end;
        }
        
        
        return _max;
    }
};
   
