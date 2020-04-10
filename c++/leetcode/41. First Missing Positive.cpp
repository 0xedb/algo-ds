class Solution
{
public:
  int firstMissingPositive(vector<int> &nums)
  {
    if (!nums.size())
      return 1;
    unordered_set<int> seen;
    int min = 1;

    for (auto i : nums)
    {
      if (i > 0)
        seen.insert(i);
    }

    for (auto i : seen)
    {
      if (seen.find(min) != seen.end())
        min++;
      else
        break;
    }

    return min;
  }
};