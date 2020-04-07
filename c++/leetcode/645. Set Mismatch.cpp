class Solution
{
public:
  vector<int> findErrorNums(vector<int> &nums)
  {
    int dupe = -1, missing = 1;

    for (auto i : nums)
    {
      if (nums[abs(i) - 1] < 0)
        dupe = abs(i);
      else
        nums[abs(i) - 1] *= -1;
    }

    for (int i = 1; i < nums.size(); i++)
    {
      if (nums[i] > 0)
        missing = ++i;
    }

    return vector<int>{dupe, missing};
  }
};