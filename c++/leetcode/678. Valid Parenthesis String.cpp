class Solution
{
public:
  bool checkValidString(string s)
  {
    if (!s.size())
      return true;

    int min = 0, max = 0;

    for (auto i : s)
    {
      min += i == '(' ? 1 : -1;
      max += i == ')' ? -1 : 1;

      if (max < 0)
        break;
      min = std::max(min, 0);
    }

    return min == 0;
  }
};