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

// O(n) better
class Solution
{
public:
  int maximumProduct(vector<int> &nums)
  {
    int min1 = INT_MAX;
    int min2 = min1;

    int max1 = INT_MIN;
    int max2 = max1;
    int max3 = max1;

    for (auto i : nums)
    {
      if (i <= min1)
      {
        min2 = min1;
        min1 = i;
      }
      else if (i <= min2)
        min2 = i;

      if (i >= max1)
      {
        max3 = max2;
        max2 = max1;
        max1 = i;
      }
      else if (i >= max2)
      {
        max3 = max2;
        max2 = i;
      }
      else if (i >= max3)
        max3 = i;
    }

    return max(min1 * min2 * max1, max1 * max2 * max3);
  }
};