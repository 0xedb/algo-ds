class Solution
{
public:
  vector<int> findDisappearedNumbers(vector<int> &nums)
  {
    vector<int> result;

    for (int i = 0; i < nums.size(); i++)
    {
      const int ind = abs(nums[i]) - 1;
      if (nums[ind] > 0)
        nums[ind] *= -1;
    }

    for (int i = 1; i <= nums.size(); i++)
    {
      if (nums[i - 1] > 0)
        result.push_back(i);
    }

    return result;
  }
};