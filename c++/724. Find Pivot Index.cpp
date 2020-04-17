class Solution
{
public:
  int pivotIndex(vector<int> &nums)
  {
    const int sz = nums.size();
    int total = 0, sum_left = 0;

    for (auto i : nums)
      total += i;

    for (int i = 0; i < sz; ++i)
    {
      if (sum_left == total - nums[i] - sum_left)
        return i;
      sum_left += nums[i];
    }

    return -1;
  }
};