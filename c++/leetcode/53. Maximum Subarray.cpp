class Solution
{
public:
  int maxSubArray(vector<int> &nums)
  {
    if (!nums.size())
      return 0;
    int max = nums[0];
    int sum = max;
    int count = 0;

    for (auto num : nums)
    {
      if (count++)
      {
        sum = std::max(num, num + sum);
        max = max > sum ? max : sum;
      }
    }

    return max;
  }
};
