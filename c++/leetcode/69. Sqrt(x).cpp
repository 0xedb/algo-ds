class Solution
{
public:
  int mySqrt(int x)
  {
    int end = x;
    int start = 0;

    while (start <= end)
    {
      int mid = start + ((end - start) / 2);
      long sqr = pow(mid, 2);

      if (x == sqr)
        return mid;

      if (sqr < x)
        start = ++mid;
      else
        end = --mid;
    }

    return end;
  }
};