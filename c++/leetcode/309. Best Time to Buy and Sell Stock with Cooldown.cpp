class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() < 2) return 0; 
        
        int a = 0, b = -prices[0], c = 0;
        
        for(int i = 0; i < prices.size(); ++i) {
            int temp = a;
            a = std::max(a, c);
            c = b + prices[i];
            b = std::max(b, temp - prices[i]);
        }
        
        return std::max(a, c);
    }
};
