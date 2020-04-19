class Solution
{
public:
  bool bin_search(long, long, int);
  bool judgeSquareSum(int c)
  {
    for (long a = 0; a * a <= c; ++a)
    {
      int num = c - static_cast<int>(a * a);
      if (bin_search(0, num, num))
        return true;
    }
    return false;
  };
};
bool Solution::bin_search(long start, long end, int target)
{
  if (start > end)
    return false;

  auto mid = start + ((end - start) / 2);

  if (mid * mid == target)
    return true;

  if (mid * mid > target)
    return bin_search(start, --mid, target);
  return bin_search(++mid, end, target);
}