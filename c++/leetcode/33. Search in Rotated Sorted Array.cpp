class Solution
{
public:
  int search(vector<int> &nums, int target)
  {
    int start = 0;
    int end = nums.size() - 1;

    while (start <= end)
    {
      int mid = (start + end) / 2;
      int val = nums[mid];

      if (val == target)
        return mid;

      if (val > nums[end])
      {
        if (target < val && target >= nums[start])
          end = --mid;
        else
          start = ++mid;
      }

      else if (val < nums[start])
      {
        if (target > val && target <= nums[end])
          start = ++mid;
        else
          end = --mid;
      }

      else
      {
        if (target < val)
          end = --mid;
        else
          start = ++mid;
      }
    }

    return -1;
  }
};