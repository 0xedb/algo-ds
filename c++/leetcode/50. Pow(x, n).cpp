class Solution
{
public:
  double myPow(double x, int n)
  {
    if (n == 0)
      return 1;

    double partial = myPow(x, n / 2);

    if (n % 2 == 0)
      return partial * partial;
    else
    {
      if (n < 0)
      {
        return (partial * partial) / x;
      }

      return x * partial * partial;
    }
  }
};