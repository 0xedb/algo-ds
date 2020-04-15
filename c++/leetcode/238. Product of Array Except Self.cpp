class Solution
{
public:
  vector<int> productExceptSelf(vector<int> &nums)
  {
    vector<int> ans(nums.size());
    const int sz = nums.size();

    ans[0] = 1;

    for (int i = 1; i < sz; ++i)
    {
      ans[i] = nums[i - 1] * ans[i - 1];
    }

    int prod = 1;
    for (int i = sz - 1; i >= 0; --i)
    {
      ans[i] = prod * ans[i];
      prod *= nums[i];
    }

    return ans;
  }
};