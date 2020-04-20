class Solution
{
public:
  int findMin(vector<int> &nums)
  {
    if (!nums.size())
      return -1;

    int start = 0;
    int end = nums.size() - 1;

    while (start < end)
    {
      if (nums[start] < nums[end])
        return nums[start];

      auto mid = start + ((end - start) / 2);

      if (nums[start] <= nums[mid])
      {
        start = ++mid;
      }
      else
      {
        end = mid;
      }
    }

    return nums[start];
  }
};