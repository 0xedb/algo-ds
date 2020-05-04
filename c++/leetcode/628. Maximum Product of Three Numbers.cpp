class Solution
{
public:
  int maximumProduct(vector<int> &nums)
  {
    sort(nums.begin(), nums.end());
    const int sz = nums.size();

    int first_part = nums[0] * nums[1] * nums[sz - 1];

    int second_part = nums[sz - 3] * nums[sz - 2] * nums[sz - 1];

    return max(first_part, second_part);
  }
};