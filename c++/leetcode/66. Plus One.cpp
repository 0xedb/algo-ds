class Solution
{
public:
  vector<int> plusOne(vector<int> &digits)
  {
    int carry = 0;
    int start = digits.size() - 1;

    for (int i = start; i >= 0; i--)
    {
      if (i == start)
      {
        digits[start] += 1;
      }
      else
      {
        digits[i] += carry;
      }

      if (digits[i] < 10)
        return digits;
      digits[i] %= 10;
      carry = 1;

      if (i == 0 && carry)
      {
        digits.insert(digits.begin(), carry);
      }
    }
    return digits;
  }
};