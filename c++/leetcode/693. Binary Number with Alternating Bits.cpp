class Solution
{
public:
  bool hasAlternatingBits(int n)
  {
    vector<int> digits;

    while (n)
    {
      digits.push_back(n % 2);
      n = n / 2;
    }

    for (int i = 1; i < digits.size(); i++)
    {
      if (digits[i] == digits[i - 1])
        return false;
    }

    return true;
  }
};
