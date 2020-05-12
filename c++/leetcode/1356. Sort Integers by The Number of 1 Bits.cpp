class Solution
{
public:
  vector<int> sortByBits(vector<int> &arr)
  {

    auto count_bits = [](int n) {
      int c{};
      for (c = 0; n; ++c)
        n &= n - 1;

      return c;
    };

    sort(arr.begin(), arr.end(), [&](int a, int b) {
      if (count_bits(a) != count_bits(b))
        return count_bits(a) < count_bits(b);

      return a < b;
    });

    return arr;
  }
};