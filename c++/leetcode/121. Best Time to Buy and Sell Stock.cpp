class Solution
{
public:
  int maxProfit(vector<int> &prices)
  {
    const int sz = prices.size();
    if (!sz)
      return 0;

    int max = 0;
    int min = prices[0];

    for (int i = 1; i < sz; i++)
    {
      if (prices[i] < min)
        min = prices[i];
      max = max > prices[i] - min ? max : prices[i] - min;
    }

    return max;
  }
};