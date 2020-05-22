class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        queue<int> odd;
        queue<int> even;
        
        for(auto i : A) {
            if(i % 2 == 0) 
                even.push(i);
            else
                odd.push(i);
        }
        
        vector<int> ans;
        
        for(int i = 0; i < A.size(); ++i) { 
            if(i % 2 == 0) {
                ans.push_back(even.front());
                even.pop();
            } else {
                ans.push_back(odd.front());
                odd.pop();
            }
        }        
        
        return ans;
    }
};
