class Solution
{
public:
  bool kLengthApart(vector<int> &nums, int k)
  {
    const int sz = nums.size();
    int first = -1;
    int last = -1;

    for (int i = 0; i < sz; ++i)
    {
      if (nums[i] == 1)
      {
        if (first < 0)
          first = i;
        else if ((i - last) - 1 < k)
          return false;

        last = i;
      }
    }

    return true;
  }
};