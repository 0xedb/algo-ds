class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        int odd = 1;
        
        for(int i = 0; i < A.size(); i += 2) {
            if(A[i] % 2 != 0) {
                while(A[odd] % 2 != 0) odd += 2;
                swap(A[i], A[odd]); 
            }
        }
        
        return A;
    }
};
