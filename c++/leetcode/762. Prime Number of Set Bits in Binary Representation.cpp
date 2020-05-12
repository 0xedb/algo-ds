class Solution
{
public:
  int countPrimeSetBits(int L, int R)
  {
    auto count_bits = [](int n) {
      int c{};
      for (c = 0; n; ++c)
        n &= n - 1;

      return c;
    };

    auto is_prime = [](int x) {
      return (x == 2 || x == 3 || x == 5 || x == 7 ||
              x == 11 || x == 13 || x == 17 || x == 19);
    };

    int ans{};

    for (int i = L; i <= R; ++i)
    {
      if (is_prime(count_bits(i)))
        ++ans;
    }

    return ans;
  }
};