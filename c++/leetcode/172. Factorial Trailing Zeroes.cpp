class Solution
{
public:
  int trailingZeroes(int n)
  {
    int number_of_fives = 0;

    while (n >= 5)
    {
      n /= 5;
      number_of_fives += n;
    }

    return number_of_fives;
  }
};