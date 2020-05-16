class Solution
{
public:
  int maxPower(string s)
  {
    int power = 1;

    const int sz = s.size() - 1;

    for (int i = 0; i < sz; ++i)
    {
      int count = 1;

      while (i < sz && s[i + 1] == s[i] && ++i)
        power = max(power, ++count);
    }

    return power;
  }
};