class Solution
{
public:
  int findComplement(int num)
  {
    int dupe = num;
    int mask = 0;

    while (dupe != 0)
    {
      dupe >>= 1;
      mask = (mask << 1) | 1;
    }

    return num ^ mask;
  }
};