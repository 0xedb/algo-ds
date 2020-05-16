/*

Given a string s, the power of the string is the maximum length of a non-empty substring that contains only one unique character.

Return the power of the string.


*/

class Solution
{
public:
  int maxPower(string s)
  {
    int power = 1;

    for (int i = 0; i < s.size() - 1; ++i)
    {
      int loc = 1;

      while (i < s.size() - 1 && s[i + 1] == s[i])
      {
        power = max(power, ++loc);
        ++i;
      }
    }

    return power;
  }
};


// Better
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