class Solution
{
public:
  vector<int> getNoZeroIntegers(int n)
  {
    int A = n, B = 0;

    const auto hasZero = [](int num) {
      if (num == 0)
        return true;

      while (num)
      {
        if ((num % 10) == 0)
          return true;
        num /= 10;
      }

      return false;
    };

    while (hasZero(A) || hasZero(B))
    {
      --A;
      ++B;
    }

    return vector<int>{A, B};
  }
};