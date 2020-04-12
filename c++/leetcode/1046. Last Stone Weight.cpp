class Solution
{
public:
  int lastStoneWeight(vector<int> &stones)
  {
    while (stones.size() > 1)
    {
      const int sz = stones.size();
      sort(stones.begin(), stones.end());
      if (stones[sz - 1] == stones[sz - 2])
      {
        stones.pop_back();
        stones.pop_back();
        continue;
      }
      stones[sz - 2] = stones[sz - 1] - stones[sz - 2];
      stones.pop_back();
    }

    return stones.empty() ? 0 : stones.back();
  }
};