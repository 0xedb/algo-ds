class Solution
{
public:
  int reverse(int x)
  {
    constexpr int factor = 10;
    long v = x;
    if (v < 0)
      v *= -1;
    if (v > INT_MAX || v < INT_MIN)
      return 0;

    int sign = x < 0 ? -1 : 1;

    if (x < 0)
      x = -x;
    long sum = 0;

    while (x)
    {
      sum = sum * factor + (x % factor);
      x /= factor;
    }

    if (sum > INT_MAX)
      return 0;

    return int(sum) * sign;
  }
};