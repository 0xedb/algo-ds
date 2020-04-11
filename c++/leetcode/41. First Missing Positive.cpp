class Solution
{
public:
  int firstMissingPositive(vector<int> &nums)
  {
    if (!nums.size())
      return 1;
    unordered_set<int> seen;
    int min = 1;

    for (auto i : nums)
    {
      if (i > 0)
        seen.insert(i);
    }

    for (auto i : seen)
    {
      if (seen.find(min) != seen.end())
        min++;
      else
        break;
    }

    return min;
  }
};


// correct and O(n)
class Solution
{
public:
  int firstMissingPositive(vector<int> &nums)
  {
    if (nums.empty())
      return 1;
    const int size = nums.size();
    bool seen_one = false;

    // remove invalid : all < 1 and size
    for (int i = 0; i < size; ++i)
    {
      if (nums[i] == 1 && !seen_one)
        seen_one = true;
      else if (nums[i] < 1 || nums[i] > size)
        nums[i] = 1;
    }

    if (!seen_one)
      return 1;

    // mark visited indices
    for (int i = 0; i < size; ++i)
    {
      const int ind = abs(nums[i]) - 1;
      if (nums[ind] > 0)
        nums[ind] *= -1;
    }

    // find missing
    for (int i = 0; i < size; ++i)
    {
      if (nums[i] > 0)
        return i + 1;
    }

    return size + 1;
  }
};