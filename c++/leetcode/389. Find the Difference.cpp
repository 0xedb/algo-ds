class Solution
{
public:
  char findTheDifference(string s, string t)
  {
    int sum_s = 0;
    int sum_t = 0;

    for (auto ch : s)
    {
      sum_s += static_cast<int>(ch);
    }

    for (auto ch : t)
    {
      sum_t += static_cast<int>(ch);
    }

    return static_cast<char>(sum_t - sum_s);
  }
};