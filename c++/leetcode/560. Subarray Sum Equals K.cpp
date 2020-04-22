class Solution
{
public:
  int subarraySum(vector<int> &nums, int k)
  {
    int count = 0;
    int sum = 0;

    std::unordered_map<int, int> seen;
    seen.insert({0, 1});

    for (auto i : nums)
    {
      sum += i;
      count += seen[sum - k];
      ++seen[sum];
    }

    return count;
  }
};
