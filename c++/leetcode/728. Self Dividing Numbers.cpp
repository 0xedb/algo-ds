class Solution
{
public:
  vector<int> selfDividingNumbers(int left, int right)
  {
    vector<int> s_divide;

    for (int i = left; i <= right; i++)
    {
      auto digits = i;
      bool self_d = true;

      while (digits)
      {
        int digit = digits % 10;
        if (!digit || i % digit != 0)
        {
          self_d = false;
          break;
        }
        digits /= 10;
      }

      if (self_d)
        s_divide.push_back(i);
    }

    return s_divide;
  }
};