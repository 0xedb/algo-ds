class Solution {
public:
    string addBinary(string a, string b) {
        string ans = "";
        int carry = 0;
        
        int i = a.size() - 1;
        int j = b.size() - 1;
        
       
        while(i >= 0 || j >= 0 || carry) {
            if(i >= 0 && a[i--] == '1') ++carry;
            if(j >= 0 && b[j--] == '1') ++carry;
            ans.insert(0, 1, carry % 2 == 1 ? '1' : '0');
            carry /= 2;
        }
        
        return ans;
    }
};

 