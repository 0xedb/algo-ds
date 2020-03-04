class Solution
{
public:
  vector<int> findDuplicates(vector<int> &nums)
  {
    vector<int> result;

    for (int i = 0; i < nums.size(); i++)
    {
      int val = nums[i];
      val = val < 0 ? -val : val;

      int value = nums[val - 1];

      if (value < 0)
      {
        result.push_back(val);
      }
      else
        nums[val - 1] = -value;
    }

    return result;
  }
};
