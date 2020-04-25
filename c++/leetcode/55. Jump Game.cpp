class Solution
{
public:
  bool canJump(vector<int> &nums)
  {
    const int sz = nums.size();
    int last = sz - 1;

    for (int i = last; i >= 0; --i)
    {
      if (i + nums[i] >= last)
        last = i;
    }

    return last == 0;
  }
};