class Solution
{
public:
  int dominantIndex(vector<int> &nums)
  {
    int ans = -1;

    auto mx = *max_element(nums.begin(), nums.end());

    for (int i = 0; i < nums.size(); ++i)
    {
      if (nums[i] != mx && (nums[i] * 2) > mx)
        return -1;

      if (mx == nums[i])
        ans = i;
    }

    return ans;
  }
};