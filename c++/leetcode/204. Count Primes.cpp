class Solution
{
public:
  int countPrimes(int n)
  {
    vector<bool> nums(n, true);
    int count = 0;

    for (int i = 2; i * i < n; ++i)
    {
      for (int j = 2; j * i < n; ++j)
        nums[j * i] = false;
    }

    for (int i = 2; i < n; ++i)
    {
      if (nums[i])
        ++count;
    }

    return count;
  }
};