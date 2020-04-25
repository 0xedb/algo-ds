class Solution
{
public:
  int minCostClimbingStairs(vector<int> &cost)
  {
    int min_cost = cost[0] > cost[1] ? cost[1] : cost[0];

    if (cost.size() < 3)
      return min_cost;

    for (int i = 2; i <= cost.size(); ++i)
    {
      if (i == cost.size())
      {
        min_cost = cost[i - 1] < cost[i - 2] ? cost[i - 1] : cost[i - 2];
        break;
      }

      auto first = cost[i] + cost[i - 1];
      auto second = cost[i] + cost[i - 2];

      cost[i] = first < second ? first : second;
      min_cost = cost[i] < min_cost ? cost[i] : min_cost;
    }

    return min_cost;
  }
};