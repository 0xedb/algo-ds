class Solution
{
public:
  bool isPerfectSquare(int num)
  {
    int start = 1;
    int end = num;

    while (start <= end)
    {
      long long mid = start + ((end - start) / 2);

      auto sqr = mid * mid;

      if (sqr == num)
        return true;

      if (sqr > num)
        end = --mid;
      else
        start = ++mid;
    }

    return false;
  }
};