class Solution
{
public:
  int lengthOfLastWord(string s)
  {
    int count = 0;

    auto begin = s.rbegin();

    while (begin != s.rend())
    {
      if (*begin != ' ')
        ++count;

      if (*begin == ' ' && count)
        break;

      ++begin;
    }

    return count;
  }
};