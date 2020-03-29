class Solution
{
public:
  int rob(vector<int> &nums)
  {
    if (nums.size() == 0)
      return 0;
    int max = nums[0];

    for (int i = 0; i < nums.size(); i++)
    {
      if (i < 2)
      {
        max = nums[i] > max ? nums[i] : max;
        nums[i] = max;
      }
      else
      {
        max = max >= nums[i] + nums[i - 2] ? max : nums[i] + nums[i - 2];
        nums[i] = max;
      }
    }

    return max;
  }
};